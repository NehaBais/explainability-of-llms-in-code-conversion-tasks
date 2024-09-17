#include
#include
#include
using namespace std;
vector factor(int num) {
  vector factors; // creates a new vector for the factors of the number

  for (int i = 1; i <= sqrt(num); i++) {
    if (num % i == 0) {
      factors.push_back(i);       // pushes smallest factor to factors
      factors.push_back(num / i); // pushes largest factor to factors
    }
  }
  sort(factors.begin(), factors.end()); // sorts the factors into numerical
                                        // order for viewing purposes
  return factors;                       // returns the factors
}
int main() {
  vector expected = {1,  2,  4,  5,  10, 10,
                     20, 25, 50, 100}; // creates a new vector for the expected
                                       // factors of the number 100

  assert(factor(100) ==
         expected); // asserts that two expressions are equal to each other

  vector actual = factor(
      101); // creates a new vector for the actual factors of the number 101

  vector expected_actual = {1, 101}; // creates a new vector for the expected
                                     // and actual factors of the number 101

  assert(
      actual ==
      expected_actual); // asserts that two expressions are equal to each other

  return 0;
}