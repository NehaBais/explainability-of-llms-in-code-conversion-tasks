#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

void printMatch(const string &possibleMatch) {
  if (possibleMatch != "") {
    cout << "Found match at pos " << possibleMatch.find(s3) << endl;
  } else {
    cout << "Did not find any matches" << endl;
  }
}

int main() {
  string s1 = "abcd";
  string s2 = "abab";
  string s3 = "ab";

  // Determining if the first string starts with second string
  cout << s1.starts_with(s3) << endl;

  // Determining if the first string contains the second string at any location
  cout << s1.contains(s3) << endl;

  // Print the location of the match
  printMatch(s1.find(s3));

  // Determining if the first string ends with the second string
  cout << s2.ends_with(s3) << endl;

  return 0;
}