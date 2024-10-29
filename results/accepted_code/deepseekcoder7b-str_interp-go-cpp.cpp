#include <iostream>
#include <string>

int main() {
  std::string str = "Mary had a X lamb";
  std::string txt = "big";

  size_t pos = 0;
  while ((pos = str.find("X", pos)) != std::string::npos) {
    str.replace(pos, 1, txt);
    pos += txt.length();
<｜begin▁of▁sentence｜>
  }

  std::cout << str;

  return 0;
}