#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

void printFactors(long long nr) {
  if (nr < 1) {
    cout << "\nFactors of" << nr << "not computed";
    return;
  }
  vector<long long> factors;
  factors.push_back(1);
  auto apf = [&](long long p, int e) {
    int n = factors.size();
    for (int i = 0; i < e; ++i, p *= p) {
      for (int j = 0; j < n; ++j) {
        factors.push_back(factors[j] * p);
      }
    }
  };

  long long e = 0;
  while ((nr & 1) == 0) {
    ++e;
    nr >>= 1;
  }
  apf(2, e);

  for (long long d = 3; nr > 1; d += 2) {
    if (d * d > nr) {
      d = nr;
    }
    while ((nr %= d) == 0) {
      ++e;
    }
    if (e > 0) {
      apf(d, e);
    }
  }

  cout << "\nFactors: ";
  for (auto &i : factors) {
    cout << i << ' ';
  }
}