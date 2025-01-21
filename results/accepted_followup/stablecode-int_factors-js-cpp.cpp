#include
#include
#include
#include

std::vector<int> factors(int num) {

  std::vector<int> n_factors;

  for (int i = 1; i <= static_cast<int>(sqrt(num)))); ++i) {
    if (num % i == 0) {
      n_factors.push_back(i);
      if (static_cast<float>(num))/static_cast<float>(i)) != static_cast<float>(i))) {
        n_factors.push_back(num / i));
        }
    }
  }

  std::sort(n_factors.begin(), n_factors.end())); // numeric sort

  return n_factors;
}