#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> factors =
      factor(100); // asserts that two expressions are equal to each other
  cout << "Factors of 100: ";
  for (vector<int>::iterator it = factors.begin(); it != factors.end(); ++it) {
    cout << *it << ", ";
  }
  cout << endl;
  return 0;
}

vector<int> factor(int num) {
  vector<int> factors; // creates a new vector for the factors of the number
  for (int i = 1; i <= sqrt(num); i++) {
    if (num % i == 0) {
      factors.push_back(i);       // pushes smallest factor to factors
      factors.push_back(num / i); // pushes largest factor to factors
    }
  }
  sort(factors.begin(), factors.end()); // sorts the factors into numerical
                                        // order for viewing purposes
  return factors;
}