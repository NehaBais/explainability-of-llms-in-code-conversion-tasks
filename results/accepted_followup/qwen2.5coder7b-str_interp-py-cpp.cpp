#include <cstdio>
#include <iostream>

int main() {
  std::string extra = "little";
  char new_str[50];
  sprintf(new_str, "Mary had a %s lamb.", extra.c_str());
  std::cout << new_str;
  return 0;
}