#include <iostream>
#include <string>

int main() {
  std::string s("abcdefgh");
  int n, m, indx;
  char char1 = 'd';
  std::string chars1 = "cd";

  n = 2;
  m = 3;

  // starting from n=2 characters in and m=3 in length
  std::cout << s.substr(n - 1, m) << std::endl;

  // starting from n characters in, up to the end of the string
  std::cout << s.substr(n - 1) << std::endl;

  // whole string minus last character
  std::cout << s.substr(0, s.size() - 1) << std::endl;

  // starting from a known character char="d" within the string and of m length
  indx = s.find(char1);
  if (indx != std::string::npos) {
    std::cout << s.substr(indx, m) << std::endl;
  } else {
    std::cout << "Character not found!" << std::endl;
  }

  // starting from a known substring chars="cd" within the string and of m
  // length
  indx = s.find(chars1);
  if (indx != std::string::npos) {
    std::cout << s.substr(indx, m) << std::endl;
  } else {
    std::cout << "Substring not found!" << std::endl;
  }

  return 0;
}