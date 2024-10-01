#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

vector<int> factors(int num) {
  vector<int> n_factors;
  for (int i = 1; i <= sqrt(num); i += 1) {
    if (num % i == 0) {
      n_factors.push_back(i);
      if (num / i != i)
        n_factors.push_back(num / i);
    }
  }
  sort(n_factors.begin(),
       n_factors.end()); // sort the vector in ascending order
  return n_factors;
}

int main() {
  vector<int> res = factors(45);
  for (const auto &i : res)
    cout << i << " "; // prints 1 3 5 9 15 45
  res = factors(53);
  for (const auto &i : res)
    cout << i << " "; // prints 1 53
  res = factors(64);
  for (const auto &i : res)
    cout << i << " "; // prints 1 2 4 8 16 32 64
  return 0;
}