#include <iostream>
#include <string>
using namespace std;

int main() {
  string str1 = "abcd";
  string str2 = "abcd";
  int num1 = 123;
  int num2 = 123;

  cout << (str1 == str2) << endl;   // true
  cout << (str1 == str2) << endl;   // true
  cout << (num1 == str2) << endl;   // true
  cout << (num1 == str2) << endl;   // false
  cout << (str1 != str2) << endl;   // true
  cout << (num1 != str2) << endl;   // false
  cout << (num1 != = str2) << endl; // true
  cout << (str1 < "dcba") << endl;  // true
  cout << (str1 > "dcba") << endl;  // false
  cout << (str1 == str2) << endl;   // false (case insensitive)

  return 0;
}