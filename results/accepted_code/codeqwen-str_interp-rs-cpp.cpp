#include <iostream>
#include <string>

int main() {
  std::string str = "Mary had a X lamb.";
  str.replace(str.find("X"), 1, "little");
  std::cout << str << std::endl;

  // You can specify order
  str = "Mary had a X lamb.";
  size_t pos = str.find("X");
  str.erase(pos, 1);
  str.insert(pos, "little");
  std::cout << str << std::endl;

  // Or named arguments if you prefer
  str = "Mary had a X lamb.";
  pos = str.find("X");
  str.erase(pos, 1);
  str.insert(pos, "little");
  std::cout << str << std::endl;

  return 0;
}