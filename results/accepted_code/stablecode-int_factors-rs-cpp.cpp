#include <cmath>
#include <iostream>
#include <vector>

std::vector<int32_t> factor(int32_t num) {
  std::vector<int32_t> factors;

  for (int i = 1; i <= static_cast<int>(sqrt(num))));
  if (num % i == 0) {
    factors.push_back(i);
    factors.push_back(num / i);
  }
}
    std::sort(factors.begin(), factors.end()));

    return factors;
    }

    int main() {
      const std::vector<int32_t> expected1 = {1,  2,  4,  5,  10,
                                              10, 20, 25, 50, 100};
      auto result1 = factor(100);
    assert(result1 == expected1));

    const std::vector<int32_t> expected2 = {1, 101};
    auto result2 = factor(101);
    assert(result2 == expected2));

    return 0;
    }