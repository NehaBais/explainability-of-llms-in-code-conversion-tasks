#include
#include
#include
using namespace std;
vector factor(int n) {
  vector factors;
  for (int i = 1; i <= sqrt(n); ++i) {
    if (n % i == 0) {
      factors.push_back(i);
      factors.push_back(n / i);
    }
  }
  return factors;
}
int main() {
  for (int n : {45, 53, 64}) {
    vector factors = factor(n);
    cout << n << ": factors: ";
    for (int f : factors) {
      cout << f << " ";
    }
    cout << endl;
  }
  return 0;
}