#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

// Function to check if the first string starts with the second string.
bool starts_with(const string &s1, const string &s2) {
  return s1.substr(0, s2.size()) == s2;
}

// Function to check if the first string contains the second string at any
// location.
bool contains(const string &s1, const string &s2) {
  return s1.find(s2) != string::npos;
}

// Function to check if the first string ends with the second string.
bool ends_with(const string &s1, const string &s2) {
  if (s2.size() > s1.size())
    return false; // The second string is bigger than the first one
  return s1.substr(s1.size() - s2.size()) == s2;
}

// Function to print the location of a match.
void print_match(const string::iterator &it) {
  if (it != string::end()) {
    cout << "Found match at pos: " << distance(string::begin(), it) << endl;
  } else {
    cout << "Did not find any matches" << endl;
  }
}

int main() {
  const string s1 = "abcd";
  const string s2 = "abab";
  const string s3 = "ab";

  // Checking if the first string starts with the second string.
  cout << boolalpha << starts_with(s1, s3) << endl; // Output: true

  // Checking if the first string contains the second string at any location.
  cout << boolalpha << contains(s1, s2) << endl; // Output: true
  print_match(find(s1.begin(), s1.end(), s3));

  // Checking if the first string ends with the second string.
  cout << boolalpha << ends_with(s1, s3) << endl; // Output: true
}