#include
#include
using namespace std;

void printFactors(int64_t nr) {
  if (nr < 1) {
    cout << "Factors of " << nr << " not computed" << endl;
    return;
  }

  vector factors{1};
  auto addFactor = [&factors](int64_t p, int e) {
    for (int i = 0; i < e; ++i) {
      for (int j = 0; j < factors.size(); ++j) {
        factors.push_back(factors[j] * p);
      }
    }
  };

  int e = 0;
  while (nr % 2 == 0) {
    nr >>= 1;
    ++e;
  }

  addFactor(2, e);

  for (int64_t d = 3; d <= sqrt(nr); d += 2) {
    if (d * d > nr) {
      d = nr;
    }
    int e = 0;
    while (nr % d == 0) {
      ++e;
      nr /= d;
    }
    if (e > 0) {
      addFactor(d, e);
    }
  }

  if (nr > 1) {
    addFactor(nr, 1);
  }

  cout << "Factors of " << nr << ":" << endl;
  for (int64_t f : factors) {
    cout << f << " ";
  }
  cout << endl;
  cout << "Number of factors = " << factors.size() << endl;
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