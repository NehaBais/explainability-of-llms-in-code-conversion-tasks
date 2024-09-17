#include <cmath>
#include <vector>

std::vector<int> factors(int num) {
  std::vector<int> n_factors;
  int i;

  for (i = 1; i <= sqrt(num); i++)
    if (num % i == 0) {
      n_factors.push_back(i);
      if (num / i != i)
        n_factors.push_back(num / i);
    }
  std::sort(n_factors.begin(), n_factors.end()); // numeric sort
  return n_factors;
}