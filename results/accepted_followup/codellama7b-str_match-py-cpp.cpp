#include <cctype>
#include <iostream>
#include <string>
using namespace std;

int main() {
  string firstString = "abcd";
  string secondString = "ab";

  // Type 1: Determine if the first string starts with the second string.
  if (firstString.find(secondString) == 0) {
    cout << "The first string starts with the second string." << endl;
  } else {
    cout << "The first string does not start with the second string." << endl;
  }

  // Type 2: Determine if the first string contains the second string at any
  // location.
  if (firstString.find(secondString) != string::npos) {
    cout << "The first string contains the second string." << endl;
  } else {
    cout << "The first string does not contain the second string." << endl;
  }

  // Type 3: Determine if the first string ends with the second string.
  if (firstString.find(secondString) ==
      firstString.size() - secondString.size()) {
    cout << "The first string ends with the second string." << endl;
  } else {
    cout << "The first string does not end with the second string." << endl;
  }

  return 0;
}