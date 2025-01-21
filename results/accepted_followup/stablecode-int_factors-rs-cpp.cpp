#include <algorithm>
#include <iostream>
#include <vector>

std::vector < int32_t >> factor(int32_t num) {
  std::vector < int32_t >> factors;

  for (int i = 1; i <= static_cast<int>(sqrt(num))));
  if (num % i == 0) {
            factors.push_back({
      i, num / i}
  });
}
}

    std::sort(factors.begin(), factors.end()), [](const auto& lhs, const auto& rhs) {
  return lhs.size() < rhs.size();
    });

    return factors;
    }