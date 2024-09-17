#include
#include
using namespace std;
vector factor(int n) {
  vector factors1, factors2;
  for (int x = 1; x <= sqrt(n); x++) {
    if (n % x == 0) {
      factors1.push_back(x);
      factors2.push_back(n / x);
    }
  }
  int x = sqrt(n) + 1;
  if (x * x == n) {
    factors1.push_back(x);
  }
  for (int i = factors2.size() - 1; i >= 0; i--) {
    factors1.push_back(factors2[i]);
  }
  return factors1;
}
int main() {
  cout << "Factors of 45: ";
  for (auto i : factor(45)) {
    cout << i << ' ';
  }
  cout << endl;

  cout << "Factors of 53: ";
  for (auto i : factor(53)) {
    cout << i << ' ';
  }
  cout << endl;

  cout << "Factors of 64: ";
  for (auto i : factor(64)) {
    cout << i << ' ';
  }
  cout << endl;
  return 0;
}