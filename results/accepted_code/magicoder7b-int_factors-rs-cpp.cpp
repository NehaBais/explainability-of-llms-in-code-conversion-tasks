#include <cmath>
#include <iostream>
#include <vector>

std::vector<int> factor(int num) {
  std::vector<int>
      factors; // creates a new vector for the factors of the number

  int max = sqrt(num);
  for (int i = 1; i <= max; ++i) {
    if (num % i == 0) {
      factors.push_back(i);       // pushes smallest factor to factors
      factors.push_back(num / i); // pushes largest factor to factors
    }
  }
  return factors; // returns the factors
}

int main() {
  std::vector<int> result = factor(100);
  for (auto num : result) {
    std::cout << num << " ";
  }

  result = factor(101);
  for (auto num : result) {
    std::cout << num << " ";
  }

  return 0;
}