#include <iostream>
#include <vector>
using namespace std;

void printFactors(long long int nr) {
  if (nr < 1) {
    cout << "Factors of " << nr << " not computed" << endl;
    return;
  }

  cout << "Factors of " << nr << ": ";
  vector<int64_t> fs = {1};

  auto apf = [&](int64_t p, int e) {
    for (int i = 0; i < e; ++i, p *= 2) {
      fs.push_back(fs[i] * p);
    }
  };

  if (nr == 1)
    return;

  int64_t d = 3;
  while (d * d <= nr) {
    d += 2;
  }

  apf(2, 0);
  for (; nr > 1;) {
    if (d * d <= nr) {
      d += 2;
      continue;
    }
    int64_t m = nr;
    nr /= d;
    while (m % d == 0) {
            fs.push_back(fs.back() * int64_t(d)));
            m /= d;
    }
    if (m == 1)
      break;
    d += 2;
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