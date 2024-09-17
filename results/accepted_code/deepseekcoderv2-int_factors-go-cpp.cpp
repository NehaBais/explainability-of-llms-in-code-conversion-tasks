#include <iostream>
using namespace std;

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
}

void printFactors(int64_t nr) {
  if (nr < 1) {
    cout << "Factors of " << nr << " not computed" << endl;
    return;
  }
  cout << "Factors of " << nr << ": ";
  vector<int64_t> fs = {1};
  auto apf = [&](int64_t p, int e) {
    for (int i = 0; i < e; ++i) {
      int n = fs.size();
      for (int j = 0; j < n; ++j) {
        fs.push_back(fs[j] * p);
      }
    }
  };
  int e = 0;
  while ((nr & 1) == 0) {
    nr >>= 1;
    e++;
  }
  apf(2, e);
  for (int64_t d = 3; nr > 1 && d * d <= nr; d += 2) {
    if (nr % d != 0)
      continue;
    for (e = 0; nr % d == 0; e++) {
      nr /= d;
    }
    apf(d, e);
  }
  cout << fs << "Number of factors = " << fs.size() << endl;
}