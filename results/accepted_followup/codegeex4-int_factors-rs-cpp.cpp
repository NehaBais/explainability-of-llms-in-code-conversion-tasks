#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

vector<int> factor(int num) {
  vector<int> factors;

  for (int i = 1; i <= sqrt(num); ++i) {
    if (num % i == 0) {
      factors.push_back(i);
      factors.push_back(num / i);
    }
  }

  return factors;
}

int main() {
  assert((factor(100) == vector<int>{1, 2, 4, 5, 10, 10, 20, 25, 50, 100}));
  assert((factor(101) == vector<int>{1, 101}));

  return 0;
}