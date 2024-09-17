#include <algorithm>
#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

// Function to calculate factors
vector<int> factors(int num) {
  vector<int> n_factors;
  for (int i = 1; i <= sqrt(num); i++)
    if (num % i == 0) {
      n_factors.push_back(i);
      // Checking for perfect square, as it would duplicate the factor
      if (num / i != i)
        n_factors.push_back(num / i);
    }

  sort(n_factors.begin(), n_factors.end()); // numeric sort

  return n_factors;
}

// Driver Code
int main() {
  vector<int> result = factors(45);
  for (auto i : result)
    cout << i << " "; // prints 1,3,5,9,15,45

  return 0;
}