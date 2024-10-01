#include <iostream>
#include <string>

std::string sconcat(const std::string &s1, const std::string &s2) {
  std::string s0 = s1 + s2;
  return s0;
}

int main() {
  std::string s = "hello";
  std::string s2;

  /* or */
  std::cout << "\"" << s << "\" literal\n";
  s2 = sconcat(s, std::string(" literal"));
  std::cout << s2 << "\n";
  free(s2);
}