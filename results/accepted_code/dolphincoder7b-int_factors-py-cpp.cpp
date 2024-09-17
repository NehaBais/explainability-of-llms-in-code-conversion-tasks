#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

// Function to print factors
void factor(int n) {
  vector<int> factors1, factors2;
  for (int x = 1; x * x <= n; ++x) {
    if (n % x == 0) {
      factors1.push_back(x);
      factors2.push_back(n / x);
    }
  }
  int x = isqrt(n) + 1;
  if (x * x == n)
    factors1.push_back(x);

  // Reverse the order of elements in factors2
  reverse(factors2.begin(), factors2.end());

  // Print factors
  for (int i : factors1) {
    cout << i << " ";
  }
  cout << "\n";
}

// Main function
int main() {
  vector<int> numbers{45, 53, 64};

  // Display the factors of given numbers
  for (const int &num : numbers) {
    factor(num);
  }

  return 0;
}