#include <algorithm> // for std::sort
#include <iostream>
#include <vector>

std::vector<int> factors(int num) {
  std::vector<int> n_factors;

  for (int i = 1; i <= static_cast<int>(sqrt(num)); ++i) {
    if (num % i == 0) {
      n_factors.push_back(i);
      if (num / i != i) {
        n_factors.push_back(num / i);
      }
    }
  }

  std::sort(n_factors.begin(), n_factors.end()); // numeric sort
  return n_factors;
}

int main() {
  auto result = factors(45); // [1,3,5,9,15,45]
  for (int i : result) {
    std::cout << i << " ";
  }
  std::cout << std::endl;

  result = factors(53); // [1,53]
  for (int i : result) {
    std::cout << i << " ";
  }
  std::cout << std::endl;

  result = factors(64); // [1,2,4,8,16,32,64]
  for (int i : result) {
    std::cout << i << " ";
  }
  std::cout << std::endl;

  return 0;
}