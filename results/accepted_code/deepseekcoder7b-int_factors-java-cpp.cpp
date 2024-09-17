#include <cmath>
#include <iostream>
#include <set>
using namespace std;

// Function to calculate and print the factors
void findFactors(long n) {
  set<long> factors; // Create a set for storing unique factors.

  // Adding number itself and one at first.
  factors.insert(n);
  factors.insert(1);

  // Loop from (n-1) to sqrt(n), checking if the remainder is zero. If yes, add
  // both factors into set.
  for (long test = n - 1; test >= sqrt(n); --test) {
    if (n % test == 0) {
      factors.insert(test);
      factors.insert(n / test);
    }
  }

  // Display all the factors
  for (auto i = factors.begin(); i != factors.end(); ++i) {
    cout << *i << endl;
  }
}

int main() {
  long number = 24; // Testing with a positive integer, you can replace it as
                    // per your requirement.

  findFactors(number);

  return 0;
}