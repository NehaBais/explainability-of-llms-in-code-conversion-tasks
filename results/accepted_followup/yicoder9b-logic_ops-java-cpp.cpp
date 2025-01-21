#include <iostream>

void logic(bool a, bool b) {
  std::cout << "a AND b: " << std::boolalpha << (a && b) << std::endl;
  std::cout << "a OR b: " << std::boolalpha << (a || b) << std::endl;
  std::cout << "NOT a: " << std::boolalpha << !a << std::endl;
}

int main() {
  logic(true,
        false); // replace true and false with the actual values you need.
                // this is just an example to test if it's working as expected
  return 0;
}