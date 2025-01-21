#include <iostream>
#include <vector>
using namespace std;

void printFactors(long long nr) {
  if (nr <= 0) {
    cout << " Factors of " << nr << " not computed" << endl;
    return;
  }
  cout << " Factors of " << nr << ": ";
  vector<long long> fs = {1};
  auto apf = [&fs](long long p, int e) mutable {
    for (int i = 0; i < e; ++i)
      fs.push_back(fs[i] * p);
  };
  int e = 0;
  while ((nr & 1) == 0) {
    nr >>= 1;
    ++e;
  }
  apf(2, e);
  for (long long d = 3; nr > 1; d += 2) {
    int e = 0;
    while ((nr & 1) == 0) {
      nr >>= 1;
      ++e;
    }
    if (d * d <= nr)
      apf(d, e);
  }
  for (auto f : fs)
    cout << " " << f;
  cout << endl << " Number of factors = " << fs.size() << endl;
}

int main() {
  printFactors(-1);
  printFactors(0);
  printFactors(1);
  printFactors(2);
  printFactors(3);
  printFactors(53);
  printFactors(45);
  printFactors(64);
  printFactors(600851475143);
  printFactors(999999999999999989);

  return 0;
}