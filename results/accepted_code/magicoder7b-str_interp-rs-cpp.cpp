#include <iostream>
#include <string>

int main() {
  std::cout << "Mary had a little lamb" << std::endl;

  // You can specify order
  std::cout << "little had a " << "Mary" << " lamb" << std::endl;

  // Or named arguments if you prefer
  std::string name = "Mary";
  std::string adj = "little";
  std::cout << adj + " had a " + name + " lamb" << std::endl;
}