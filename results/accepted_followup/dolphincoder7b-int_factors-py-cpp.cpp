#include <algorithm> // for std::reverse()
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

  int x = sqrt(n) + 1; // find integer square root using sqrt()
  if (x * x == n)
    factors1.push_back(x);

  reverse(factors2.begin(),
          factors2.end()); // reverse the order of elements in factors2

  for (int i : factors1) {
    cout << i << " ";
  }
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