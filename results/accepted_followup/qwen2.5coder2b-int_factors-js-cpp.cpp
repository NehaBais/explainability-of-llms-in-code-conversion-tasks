#include <iostream>
#include <string>
#include <vector>

int main() {
  std::vector<int> v = {1, 2, 3, 4};

  for (const auto &i : v) {
    std::cout << std::to_string(i) << " ";
  }

  return 0;
}