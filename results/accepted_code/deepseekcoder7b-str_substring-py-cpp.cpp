#include <iostream>
#include <string>

int main() {
  std::string s = "abcdefgh";
  int n = 2, m = 3;
  char char_d = 'd', chars[] = {'c', 'd'};

  // starting from n=2 characters in and m=3 in length;
  std::cout << s.substr(n - 1, m) << "\n";

  // starting from n characters in, up to the end of the string;
  std::cout << s.substr(n - 1) << "\n";

  // whole string minus last character;
  if (s.size() > 0) {
    std::cout << s.substr(0, s.size() - 1) << "\n";
  }

  // starting from a known character char="d" within the string and of m length;
  int indx = -1;
  for (int i = 0; i < s.size() && indx == -1; ++i) {
    if (s[i] == char_d)
      indx = i;
  }
  if (indx != -1) {
    std::cout << s.substr(indx, m) << "\n";
  }

  // starting from a known substring chars="cd" within the string and of m
  // length.
  indx = -1;
  for (int i = 0; i < s.size() - 1 && indx == -1; ++i) {
    if (s[i] == chars[0] && s[i + 1] == chars[1])
      indx = i;
  }
  if (indx != -1) {
    std::cout << s.substr(indx, m) << "\n";
  }

  return <｜begin▁of▁sentence｜>.size();
}