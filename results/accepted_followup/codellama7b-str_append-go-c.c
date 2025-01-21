#include <stdio.h>

int main() {
  std::string s = "foo";
  s += "bar";
  printf("%s\n", s.c_str());
  return 0;
}