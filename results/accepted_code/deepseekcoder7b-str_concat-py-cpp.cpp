#include <iostream>
#include <sstream>
using namespace std;

int main() {
  // Create a string variable equal to any text value
  string s1 = "hello";

  // Concatenate with another string literal
  cout << s1 + " world" << endl;

  s1 += " world";
  cout << s1 << endl;

  // Join strings using stringstream
  stringstream ss;
  ss << s1 << ", " << "world" << ", " << "mom";

  // And print the resultant string
  cout << ss.str() << endl;

  return <｜begin▁of▁sentence｜ >
         2; // return value is usually int, but here it makes no sense to have a
            // variable of type 's2' and in C++ there are no strings as such.
            // Hence just returning `0` as the equivalent of Python's `return
            // s2` would be returning from main function which indicates
            // successful execution.
}