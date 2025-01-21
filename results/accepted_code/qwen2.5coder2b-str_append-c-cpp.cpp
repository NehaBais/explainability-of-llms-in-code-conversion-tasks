#include <iostream>
#include <string>

int main() {
  std::string str = "Good Morning";
  std::string cstr = " to all";
  std::string cstr2 = " !!!";

  // failure when space allocated to str is insufficient.
  if (str.length() + cstr.length() + cstr2.length() > str.capacity()) {
    /* 1st method */
    str += cstr;

    /* 2nd method */
    int x = str.length();
    str.append(cstr2);

    std::cout << str << "\n";
  }
  return 0;
}