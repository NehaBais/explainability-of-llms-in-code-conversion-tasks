#include
#include
using namespace std;
int main() {
  string str1 = "abcd";
  string str2 = "ab";
  // Determining if the first string starts with second string
  bool startsWith = (str1.find(str2) == 0);
  cout << "Does " << str1 << " start with " << str2 << "? " << startsWith
       << endl;

  // Determining if the first string contains the second string at any location
  size_t pos = str1.find(str2);
  bool contains = (pos != string::npos);
  cout << "Does " << str1 << " contain " << str2 << "? " << contains << endl;

  // Print the location of the match for part 2
  if (contains) {
    cout << "The location of the match is: " << pos << endl;
  }

  // Handling multiple occurrences of a string for part 2
  size_t prev = 0;
  while ((pos = str1.find(str2, prev)) != string::npos) {
    cout << "The location of the next match is: " << pos << endl;
    prev = pos + 1;
  }

  // Determining if the first string ends with the second string
  bool endsWith = (str1.substr(str1.length() - str2.length()) == str2);
  cout << "Does " << str1 << " end with " << str2 << "? " << endsWith << endl;

  return 0;
}