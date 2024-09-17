#include <iostream>
#include <string>
#include <vector>

int main() {
  std::vector<int> nums(2);
  std::cout << "Enter two integers: ";
  std::cin >> nums[0] >> nums[1];

  int a = nums[0];
  int b = nums[1];

  if (a < b) {
    std::cout << a << " is less than " << b << std::endl;
  } else if (a == b) {
    std::cout << a << " equals " << b << std::endl;
  } else if (a > b) {
    std::cout << a << " is greater than " << b << std::endl;
  }

  return 0;
}