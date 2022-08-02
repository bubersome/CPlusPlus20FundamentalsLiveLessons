// fig02_06.cpp
// Standard Library string class test program. 
#include <iostream>
#include <string> 
using namespace std;

int main() {
   string s1{"happy"};    
   string s2{" birthday"};
   string s3; // creates an empty string
              
   // display the strings and show their lengths (length is C++20)
   cout << "s1: \"" << s1 << "\"; length: " << s1.length()
      << "\ns2: \"" << s2 << "\"; length: " << s2.length()
      << "\ns3: \"" << s3 << "\"; length: " << s3.length();

   // compare strings with == and !=
   cout << "\n\nThe results of comparing s2 and s1:" << boolalpha
      << "\ns2 == s1: " << (s2 == s1)
      << "\ns2 != s1: " << (s2 != s1);
   
   // test string member function empty 
   cout << "\n\nTesting s3.empty():\n";

   if (s3.empty()) {
      cout << "s3 is empty; assigning to s3;\n";
      s3 = s1 + s2; // assign s3 the result of string concatenating s1 and s2
      cout << "s3: \"" << s3 << "\"";
   } 

   // testing new C++20 string member functions 
   cout << "\n\ns1 starts with \"ha\": " << s1.starts_with("ha") << endl;
   cout << "s2 starts with \"ha\": " << s2.starts_with("ha") << endl;
   cout << "s1 ends with \"ay\": " << s1.ends_with("ay") << endl;
   cout << "s2 ends with \"ay\": " << s2.ends_with("ay") << endl;
} 


/**************************************************************************
 /Users/32f/C/CPlusPlus20FundamentalsLiveLessons/cmake-build-debug/CPlusPlus20FundamentalsLiveLessons
s1: "happy"; length: 5
s2: " birthday"; length: 9
s3: ""; length: 0

The results of comparing s2 and s1:
s2 == s1: false
s2 != s1: true

Testing s3.empty():
s3 is empty; assigning to s3;
s3: "happy birthday"

s1 starts with "ha": true
s2 starts with "ha": false
s1 ends with "ay": false
s2 ends with "ay": true

Process finished with exit code 0

 **************************************************************************/
