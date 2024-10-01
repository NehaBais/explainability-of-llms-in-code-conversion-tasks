#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

vector<int> factors(int num) {
  vector<int> n_factors;
  for (int i = 1; i <= floor(sqrt(num)); i++) {
    if (num % i == 0) {
      n_factors.push_back(i);
      if (num / i != i)
        n_factors.push_back(num / i);
    }
  }
  sort(n_factors.begin(), n_factors.end()); // numeric sort
  return n_factors;
}

int main() {
  vector<int> factorsOf45 = factors(45);
  for (int i = 0; i < factorsOf45.size(); i++) {
    cout << factorsOf45[i] << " ";
  }
  cout << endl; // prints 1,3,5,9,15,45
  vector<int> factorsOf53 = factors(53);
  for (int i = 0; i < factorsOf53.size(); i++) {
    cout << factorsOf53[i] << " ";
  }
  cout << endl; // prints 1,53
  vector<int> factorsOf64 = factors(64);
  for (int i = 0; i < factorsOf64.size(); i++) {
    cout << factorsOf64[i] << " ";
  }
  cout << endl; // prints 1,2,4,8,16,32,64
  return 0;
}