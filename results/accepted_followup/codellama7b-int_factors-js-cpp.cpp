#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

vector<int> factors(int num) {
  vector<int> n_factors = {};
  int i;

  for (i = 1; i <= sqrt(num); i += 1) {
    if (num % i == 0) {
      n_factors.push_back(i);
      if (num / i != i) {
        n_factors.push_back(num / i);
      }
    }
  }

  sort(n_factors.begin(), n_factors.end()); // numeric sort
  return n_factors;
}

int main() {
  vector<int> factors1 = factors(45);
  vector<int> factors2 = factors(53);
  vector<int> factors3 = factors(64);

  cout << "Factors of 45: ";
  for (int factor : factors1) {
    cout << factor << " ";
  }
  cout << endl;

  cout << "Factors of 53: ";
  for (int factor : factors2) {
    cout << factor << " ";
  }
  cout << endl;

  cout << "Factors of 64: ";
  for (int factor : factors3) {
    cout << factor << " ";
  }
  cout << endl;

  return 0;
}