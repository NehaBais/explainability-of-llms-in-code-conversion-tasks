#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

// Function to compute the factors of a number
vector<int> factors(int num) {
  vector<int> n_factors;
  for (int i = 1; i <= sqrt(num); i++) {
    if (num % i == 0) {
      n_factors.push_back(i);
      // Check and add the other factor, only if it is not already in the list
      // and is smaller than current number
      int other = num / i;
      bool duplicated = false;
      for (int &j : n_factors) {
        if (j == other) {
          // Already exists, so we skip
          duplicated = true;
          break;
        }
      }

      if (!duplicated && i < other) {
        n_factors.push_back(other);
      }
    }
  }

  // Sorting the vector in ascending order using a sort function
  sort(n_factors.begin(), n_factors.end());
  return n_factors;
}

// Driver code to test the function
int main() {
  for (auto i : factors(45))
    cout << i << " ";
  cout << "\n";

  for (auto i : factors(53))
    cout << i << " ";
  cout << "\n";

  for (auto i : factors(64))
    cout << i << " ";
  return 0;
}