#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void printFactors(int64_t nr) {
  if (nr < 1) {
    cout << "Factors of " << nr << " not computed" << endl;
    return;
  }
  cout << "Factors of " << nr << ": ";
  vector<int64_t> fs = {1};
  auto apf = [&fs](int64_t p, int e) {
    size_t n = fs.size();
    for (size_t i = 0, pp = p; i < e; i++, pp *= p) {
      for (size_t j = 0; j < n; j++) {
        fs.push_back(fs[j] * pp);
      }
    }
  };
  int64_t e = 0;
  while (nr % 2 == 0) {
    e++;
    nr /= 2;
  }
  apf(2, e);
  for (int64_t d = 3; nr > 1; d += 2) {
    if (d * d > nr) {
      d = nr;
    }
    e = 0;
    while (nr % d == 0) {
      e++;
      nr /= d;
    }
    if (e > 0) {
      apf(d, e);
    }
  }
  sort(fs.begin(), fs.end());
  fs.erase(unique(fs.begin(), fs.end()), fs.end());
  for (int i = 0; i < fs.size(); i++) {
    cout << fs[i] << " ";
  }
  cout << "\nNumber of factors = " << fs.size() << endl;
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
}