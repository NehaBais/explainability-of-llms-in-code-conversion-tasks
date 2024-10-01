#include <iostream>
using namespace std;

int main() {
  string my_string_variable =
      "0"; // Create a new string variable called my_string_variable and assign
           // it the value '0'
  cout << (my_string_variable + "12345678")
       << endl; // Prepend the string literal to the existing string.

  return 0;
}