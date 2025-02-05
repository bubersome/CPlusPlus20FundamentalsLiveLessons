// Fig. 9.1: AccountTest.cpp
// Creating and manipulating an Account object.
#include <iostream>
#include <string>
//#include <fmt/format.h> // In C++20, this will be #include <format>
#include "Account.h"
#include "../../libraries/fmt/include/fmt/format.h"

using namespace std;

int main() {
   Account myAccount{}; // create Account object myAccount

   // show that the initial value of myAccount's name is the empty string
   cout << fmt::format("Initial account name: {}\n", myAccount.getName());

   // prompt for and read the name
   cout << "Enter the account name: ";
   string name{};
   getline(cin, name); // read a line of text       
   myAccount.setName(name); // put name in the myAccount object

   // display the name stored in object myAccount
   cout << fmt::format("Updated account name: {}\n", myAccount.getName());
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
