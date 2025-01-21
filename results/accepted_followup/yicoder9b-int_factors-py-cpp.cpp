#include <iostream>
using namespace std;

void factor(int n) {
  cout << n << " : Factors: ";
  for (int x = 1; x * x <= n; ++x) {
    if (n % x == 0) {
      cout << x << ", ";
      if (n / x != x) // Avoid duplicate when x is the square root of n
        cout << n / x << ", ";
    }
  }
  cout << endl;
}

int main() {
  for (int i = 0; i < 3;
       ++i) {       // Loop to compute the factors for several numbers
    factor(45 + i); // List of numbers to compute the factors
  }
  return 0;
}