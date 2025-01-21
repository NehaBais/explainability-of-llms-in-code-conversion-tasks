#include <iostream> // Import iostream library for input/output operations
using namespace std;
int main() {
  string str = "def"; // Initialize the string variable
  str = "abc" + str;  // Prepend the string with another string literal
  cout << "Result: " << str << endl; // Output the result
  return 0;
}