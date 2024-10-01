#include <cstring>
#include <iostream>
#include <string>

int main() {
  std::string str = "my String";
  std::string cstr = "Changed ";
  std::string dup;
  sprintf(str, "%s%s", cstr.c_str(), (dup = str).c_str());
  free(dup);
  std::cout << str << "\n";
  return 0;
}