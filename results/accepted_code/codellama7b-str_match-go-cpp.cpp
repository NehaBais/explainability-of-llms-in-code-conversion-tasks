#include <iostream>
#include <string>
using namespace std;

int main() {
  string first = "abracadabra";
  string second = "abr";

  // Determine if the first string starts with the second string
  bool startsWith = false;
  if (first.compare(0, second.length(), second) == 0) {
    startsWith = true;
  }
  cout << "1. " << first << " starts with " << second << ": " << startsWith
       << endl;

  // Determine if the first string contains the second string at any location
  bool contains = false;
  size_t index = first.find(second);
  if (index != string::npos) {
    contains = true;
    cout << "2. " << first << " contains " << second << ": " << contains
         << endl;

    // Print the location of the match for part 2
    cout << "2.1. at location " << index << endl;

    // Handle multiple occurrences of a string for part 2
    size_t start = index + second.length();
    while (true) {
      index = first.find(second, start);
      if (index == string::npos) {
        break;
      }
      cout << "2.2. at location " << index << endl;
      start += second.length();
    }

    // Print a message to indicate that the search is complete
    cout << "2.2. and that's all" << endl;
  }

  // Determine if the first string ends with the second string
  bool endsWith = false;
  if (first.compare(first.length() - second.length(), second.length(),
                    second) == 0) {
    endsWith = true;
  }
  cout << "3. " << first << " ends with " << second << ": " << endsWith << endl;

  return 0;
}