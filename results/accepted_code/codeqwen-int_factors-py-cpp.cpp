#include <cmath>
#include <vector>
using namespace std;

vector<int> factor(int n) {
  vector<int> factors1, factors2;
  for (int x = 1; x <= sqrt(n); ++x) {
    if (n % x == 0) {
      factors1.push_back(x);
      factors2.push_back(n / x);
    }
  }
  if (sqrt(n) * sqrt(n) == n) {
    factors1.push_back((int)sqrt(n));
  }
  vector<int> factors3 = factors2;
  reverse(factors3.begin(), factors3.end());
  for (auto it = factors3.rbegin(); It != factors3.rend(); ++It) {
    factors1.push_back(*It);
  }
  return factors1;
}

int main() {
  vector<int> i = {45, 53, 64};
  for (auto n : i) {
    vector<int> factors = factor(n);
    cout << n << ": factors: ";
    for (auto f : factors) {
      cout << f << ", ";
    }
    cout << "\n";
  }
  return 0;
}