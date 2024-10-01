#include <iostream>
#include <string>
using namespace std;

int main() {
  string str = "Good Morning"; // Initialize a string variable
  string cstr = " to all";     // Initialize another string literal
  string cstr2 = " !!!";       // Initialize another string literal

  if (str.length() > str.size()) { // Check if the allocated space is sufficient
    str += cstr;         // Append the two strings using the '+' operator
    str += cstr2;        // Append the third string to the same variable
    cout << str << endl; // Print the resulting string
  }

  return 0;
}