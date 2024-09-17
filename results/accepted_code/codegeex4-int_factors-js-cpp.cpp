#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

vector<int> factors(int num) {
  vector<int> n_factors;
  for (int i = 1; i <= sqrt(num); i++) {
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
  vector<int> factors_of_45 = factors(45); // [1,3,5,9,15,45]
  for (int i : factors_of_45)
    cout << i << " ";
  cout << endl;

  vector<int> factors_of_53 = factors(53); // [1,53]
  for (int i : factors_of_53)
    cout << i << " ";
  cout << endl;

  vector<int> factors_of_64 = factors(64); // [1,2,4,8,16,32,64]
  for (int i : factors_of_64)
    cout << i << " ";
  cout << endl;

  return 0;
}