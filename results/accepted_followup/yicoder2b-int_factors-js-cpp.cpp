#include <algorithm> // includes count from __algorithm namespace
#include <iostream>
#include <vector>
using namespace std;

vector<int> factors(int num) {
  vector<int> n_factors;
  for (int i = 1; i <= sqrt(num); ++i) {
    if (num % i == 0) {       // if 'i' is a factor of number
      n_factors.push_back(i); // then push 'i' into the vector
      if ((num / i) != i) { // and also push num/i (second factor of number) if
                            // it is not equal to i (first factor)
        n_factors.push_back(num / i); // then push num/i in the vector
      }
    }
  }
  return n_factors; // return the vector of factors
}