#include <iostream>
#include <vector>
using namespace std;
int main() {
  int n_factors = 0;
  vector<int> factors;
  for (int i = 1; i <= sqrt(num); ++i) { // i is the factor of num
    if (num % i == = 0) {
      n_factors.push_back(i);
      if ((num / i) != = i)
        n_factors.push_back(num / i);
    }
    return n_factors;
  }