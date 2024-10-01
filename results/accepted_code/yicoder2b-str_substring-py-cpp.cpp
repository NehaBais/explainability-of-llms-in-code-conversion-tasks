#include <iostream>
#include <string>
using namespace std;

int main() {
  string s = "abcdefgh";
  int n, m, char_index, substring_index;
  n = 2;
  m = 3;
  char = 'd';
  chars = "cd";

  // using string indexing operator to get the substring from index n-1 to n+m-1
  cout << s.substr(n - 1, m) << endl;

  // using substr function to get the substring from the index n-1 till the end
  // of the string
  cout << s.substr(n - 1) << endl;

  // using find and substr functions to get the whole string minus the last
  // character
  char_index = s.find(s[s.size() - 2]);
  cout << s.substr(0, char_index) << endl;

  // using find function to get the index of substring char in the string
  substring_index = s.find(chars);
  cout << s.substr(substring_index, m)
       << endl; // print first m characters of the substring
}