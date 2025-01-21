#include <iostream>
#include <set>
using namespace std;

set<long> factors(long n) {
  set<long> factors;
  factors.insert(n);
  factors.insert(1L);
  for (long test = n - 1; test >= sqrt(n); test--) {
    if (n % test == 0)
      factors.insert(test);
    factors.insert(n / test);
  }
  return factors;
}

int main() {
  long number;
  cout << "Enter a positive integer: ";
  cin >> number;

  set<long> result = factors(number);

  cout << "Factors of " << number << ": ";

  for (auto it : result) {
    cout << it << " ";
  }

  return 0;
}