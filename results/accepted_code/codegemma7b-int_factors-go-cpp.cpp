#include <iostream>
#include <vector>
using namespace std;

void printFactors(long long nr) {
  if (nr < 1) {
    cout << "Factors of " << nr << " not computed" << endl;
    return;
  }
  cout << "Factors of " << nr << ": ";
  vector<long long> fs{1};
  auto apf = [&](long long p, long long e) {
    long long n = fs.size();
    for (long long i = 0, pp = p; i < e; i++, pp *= p) {
      for (long long j = 0; j < n; j++) {
        fs.push_back(fs[j] * pp);
      }
    }
  };
  long long e = 0;
  while (nr % 2 == 0) {
    nr >>= 1;
    e++;
  }
  apf(2, e);
  for (long long d = 3; nr > 1; d += 2) {
    if (d * d > nr) {
      d = nr;
    }
    e = 0;
    while (nr % d == 0) {
      nr /= d;
      e++;
    }
    if (e > 0) {
      apf(d, e);
    }
  }
  cout << fs << endl;
  cout << "Number of factors = " << fs.size() << endl;
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