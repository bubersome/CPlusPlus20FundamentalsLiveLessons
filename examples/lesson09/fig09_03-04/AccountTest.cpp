// Fig. 9.4: AccountTest.cpp
// Using the Account constructor to initialize the m_name data
// member at the time each Account object is created.
#include <iostream>
//#include <fmt/format.h> // In C++20, this will be #include <format>
#include "Account.h"
#include "../../libraries/fmt/include/fmt/format.h"

using namespace std;

int main() {
   // create two Account objects
   Account account1{"Jane Green"};
   Account account2{"John Blue"};

   // display initial each Account's corresponding name
   cout << fmt::format("account1 name is: {}\naccount2 name is: {}\n",
              account1.getName(), account2.getName());
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
