#include <algorithm>
#include <cmath>
#include <vector>

std::vector<int> factors(int num) {
  std::vector<int> n_factors;
  for (int i = 1; i <= std::floor(std::sqrt(num)); i += 1)
    if (num % i == 0)
      n_factors.push_back(i);
  if (num / i != i && num % (num / i) == 0) {
    n_factors.push_back(num / i);
  }

  std::sort(n_factors.begin(), n_factors.end()); // numeric sort
  return n_factors;
}