#include <cmath>
#include <iostream>
#include <vector>

int factor(int n) {
  std::vector<int> factors1, factors2;
  for (int x = 1; x <= std::isqrt(n); ++x) {
    if (n % x == 0) {
      factors1.push_back(x);
      factors2.push_back(n / x);
    }
  }

  int x = factors1.empty() ? 1 : factors1.back() + 1;

  if (x * x <= n) {
    factors1.push_back(x);
  }

    std::merge(factors1.begin(), factors1.end(), 
                        factors2.begin(), factors2.end(), 
                        std::ostream_iterator<int>(std::cout, " ")))) << std::endl;
    return n;
}

int main() {
    for (const auto& i: {
    45, 53, 64}
}) {
        factor(i);
    };

return 0;
}