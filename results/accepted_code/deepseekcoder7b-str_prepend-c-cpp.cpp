#include <cstring>
#include <iostream>

int main() {
  std::string str =
      "my String"; // create a string variable equal to any text value
  const char *cstr =
      "Changed "; // prepend the string with another string literal

  str.insert(0, cstr); // append cstr at the beginning of str

  std::cout << str; // print str

  return 0;
}