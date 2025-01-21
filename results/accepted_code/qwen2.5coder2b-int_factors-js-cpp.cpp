#include <iostream>
using namespace std;

vector<int> factors(int num) {
  vector<int> n_factors;
  for (int i = 1; i <= sqrt(num); ++i) {
    if (num % i == 0) {
      n_factors.push_back(i);
      if (num / i != i)
        n_factors.push_back(num / i);
    }
  }
  sort(n_factors.begin(), n_factors.end());
  return n_factors;
}

int main() {
  cout << factors(45) << endl; // [1,3,5,9,15,45]
  cout << factors(53) << endl; // [1,53]
  cout << factors(64) << endl; // [1,2,4,8,16,32,64]
  return 0;
}