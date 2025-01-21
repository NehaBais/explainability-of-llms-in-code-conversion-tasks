#include <iostream>
#include <string>

int main() {
  std::string str = "Mary had a X lamb";
  std::string txt = "big";

  size_t pos = 0;
  while ((pos = str.find("X", pos)) != std::string::npos) {
    str.replace(pos, 1, txt);
    pos += txt.length();
  }

  std::cout << str;

  return <｜begin▁of▁sentence｜ >
         0; // Replaced '7' with '0' to make the program compile successfully
}