#include <iostream>
#include <string>

int main() {
  std::string buffer;
  int nums[2];

  for (int i = 0; i < 2; ++i) {
    std::getline(std::cin, buffer);
    nums[i] = std::stoi(buffer);
  }

  int a = nums[0];
  int b = nums[1];

  if (a < b) {
    std::cout << a << " is less than " << b;
  } else if (a == b) {
    std::cout << a << " equals " << b;
  } else {
    std::cout << a << " is greater than " << b;
  }

  return 0;
}