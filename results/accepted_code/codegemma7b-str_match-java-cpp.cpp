#include <iostream>
#include <string>

using namespace std;

int main() {
  string str1 = "abcd";
  string str2 = "ab";

  // 1. Determining if the first string starts with second string
  if (str1.find(str2) == 0) {
    cout << "First string starts with second string" << endl;
  } else {
    cout << "First string does not start with second string" << endl;
  }

  // 2. Determining if the first string contains the second string at any
  // location
  if (str1.find(str2) != string::npos) {
    cout << "First string contains second string" << endl;
    // Print the location of the match
    cout << "Location of match: " << str1.find(str2) << endl;

    // Handle multiple occurrences of a string
    int count = 0;
    int pos = str1.find(str2);
    while (pos != string::npos) {
      count++;
      pos = str1.find(str2, pos + str2.size());
    }
    cout << "Number of occurrences: " << count << endl;
  } else {
    cout << "First string does not contain second string" << endl;
  }

  // 3. Determining if the first string ends with the second string
  if (str1.rfind(str2) == str1.size() - str2.size()) {
    cout << "First string ends with second string" << endl;
  } else {
    cout << "First string does not end with second string" << endl;
  }

  return 0;
}