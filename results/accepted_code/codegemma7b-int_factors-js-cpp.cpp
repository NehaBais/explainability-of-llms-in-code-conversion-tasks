#include <algorithm>
#include <iostream>
#include <vector>

std::vector<int> factors(int num) {
  std::vector<int> n_factors;
  int i;

  for (i = 1; i <= std::sqrt(num); i++) {
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
  std::vector<int> factors45 = factors(45);
  std::vector<int> factors53 = factors(53);
  std::vector<int> factors64 = factors(64);

  // Print the factors
  std::cout << "Factors of 45: ";
  for (int factor : factors45) {
    std::cout << factor << " ";
  }
  std::cout << std::endl;

  std::cout << "Factors of 53: ";
  for (int factor : factors53) {
    std::cout << factor << " ";
  }
  std::cout << std::endl;

  std::cout << "Factors of 64: ";
  for (int factor : factors64) {
    std::cout << factor << " ";
  }
  std::cout << std::endl;

  return 0;
}