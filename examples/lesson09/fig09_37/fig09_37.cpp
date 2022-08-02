// fig09_37.cpp
// Serializing and deserializing objects containing private data.
#include <iostream>
#include <fstream>
#include <string>
#include <string_view>
#include <vector>
//#include <fmt/format.h> // In C++20, this will be #include <format>
#include "../../libraries/fmt/include/fmt/format.h"

#include "../../libraries/cereal-1.3.0/include/cereal/archives/json.hpp"
#include "../../libraries/cereal-1.3.0/include/cereal/types/vector.hpp"

//#include <cereal/archives/json.hpp>
//#include <cereal/types/vector.hpp>

using namespace std;

class Record {
   // declare serialize as a friend for direct access to private data
   template<typename Archive>
   friend void serialize(Archive& archive, Record& record);

public:
   // constructor
   explicit Record(int account = 0, string_view first = "",
      string_view last = "", double balance = 0.0)
      : m_account{account}, m_first{first},
      m_last{last}, m_balance{balance} {}

   // get member functions
   int getAccount() const { return m_account; }
   const string& getFirst() const { return m_first; }
   const string& getLast() const { return m_last; }
   double getBalance() const { return m_balance; }

private:
   int m_account{};
   string m_first{};
   string m_last{};
   double m_balance{};
};

// function template serialize is responsible for serializing and 
// deserializing Record objects to/from the specified Archive
template <typename Archive>
void serialize(Archive& archive, Record& record) {
   archive(cereal::make_nvp("account", record.m_account),
      cereal::make_nvp("first", record.m_first),
      cereal::make_nvp("last", record.m_last),
      cereal::make_nvp("balance", record.m_balance));
}

// display record at command line
void displayRecords(const vector<Record>& records) {
   for (const auto& r : records) {
      cout << fmt::format("{} {} {} {:.2f}\n", r.getAccount(), 
                 r.getFirst(), r.getLast(), r.getBalance());
   }
}

int main() {
   vector records{
      Record{100, "Brian", "Blue", 123.45},
      Record{200, "Sue", "Green", 987.65}
   };

   cout << "Records to serialize:\n";
   displayRecords(records);

   // serialize vector of Records to JSON and store in text file
   if (ofstream output{"records2.json"}) {
      cereal::JSONOutputArchive archive{output};
      archive(cereal::make_nvp("records", records)); // serialize records
   }

   // deserialize JSON from text file into vector of Records
   if (ifstream input{"records2.json"}) {
      cereal::JSONInputArchive archive{input};
      vector<Record> deserializedRecords{};
      archive(deserializedRecords); // deserialize records
      cout << "\nDeserialized records:\n";
      displayRecords(deserializedRecords);
   }
}


/**************************************************************************
 * (C) Copyright 1992-2021 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 *************************************************************************/
