#include <iostream>
#include <string>
using namespace std;

int main() {
  // Test strings
  string str1 = "abcd", str2 = "ab", str3 = "bb", str4 = "zn", str5 = "abab";
  bool start_with_result, contains_result, ends_with_result;
  int loc;

  // 1. Determining if the first string starts with second string
  start_with_result = (str1.substr(0, str2.length()) == str2);
  cout << "Does '" << str1 << "' start with '" << str2
       << "': " << start_with_result
       << endl; // Output: Does 'abcd' start with 'ab': True

  // 2. Determining if the first string contains the second string at any
  // location
  contains_result = (str1.find(str3) != string::npos);
  cout << "Does '" << str1 << "' contain '" << str3 << "': " << contains_result
       << endl; // Output: Does 'abcd' contain 'bb': True

  // 3. Determining if the first string ends with the second string
  ends_with_result = (str1.substr(str4.length() * -1) == str4);
  cout << "Does '" << str1 << "' end with '" << str4
       << "': " << ends_with_result
       << endl; // Output: Does 'abcd' end with 'zn': False

  // 4. Print the location of match for part 2
  loc = str5.find(str3);
  cout << "The first occurrence of '" << str3 << "' in '" << str5
       << "': " << loc
       << endl; // Output: The first occurrence of 'ab' in 'abab': 0

  // Handle multiple occurrences
  while ((loc = str5.find(str3, loc + 1)) != string::npos) {
    cout << "The next occurrence of '" << str3 << "' in '" << str5
         << "': " << loc
         << endl; // Output: The next occurrence of 'ab' in 'abab': 2
  }
  return 0;
}