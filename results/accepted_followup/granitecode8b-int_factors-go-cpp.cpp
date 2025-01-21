#include
#include
using namespace std;
void printFactors(int64_t nr) {
  if (nr < 1) {
    cout << "Factors of " << nr << " not computed" << endl;
    return;
  }
  cout << "Factors of " << nr << ": ";
  vector fs = {1};
  auto apf = [&fs](int64_t p, int e) {
    int n = fs.size();
    for (int i = 0, pp = p; i < e; i++, pp *= p) {
      for (int j = 0; j < n; j++) {
        fs.push_back(fs[j] * pp);
      }
    }
  };
  int e = 0;
  while (nr % 2 == 0) {
    nr /= 2;
    e++;
  }
  apf(2, e);
  for (int64_t d = 3; nr > 1; d += 2) {
    if (d * d > nr) {
      d = nr;
    }
    int e = 0;
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
  printFactors(600851475143);
  printFactors(99999999999999989);
  return 0;
}