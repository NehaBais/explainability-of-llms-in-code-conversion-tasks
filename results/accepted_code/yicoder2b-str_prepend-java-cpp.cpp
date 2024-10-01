#include <iostream>
#include <sstream>
using namespace std;

int main() {
  string str = "def";  // create a string variable with value "def"
  str = "abc" + str;   // prepend "abc" to the original string
  cout << str << endl; // print out the final result
  return 0;
}