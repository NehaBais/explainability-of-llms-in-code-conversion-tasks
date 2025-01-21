#include <iostream>
#include <vector>
std::vector<int> factor(int n) {
  std::vector<int> factors;
  for (int i = 1; i <= n; ++i) {
    if (n % i == 0) {
      factors.push_back(i);
    }
  }
  return factors;
}
int main() {
  std::cout << "Factors of 45: ";
  for (auto i : factor(45)) {
    std::cout << i << ' ';
  }
  std::cout << '\n';
  return 0;
}