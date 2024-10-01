#include <iostream>
int main() {
  std::cout << "Mary had a " << "little" << " lamb\n";
  // You can specify order
  std::cout << "{" << 1 << "} had a {" << 0 << "} lamb\n";
  // Or named arguments if you prefer
  std::cout << "{name} had a {adj} lamb\n", adj = "little", name = "Mary";
}