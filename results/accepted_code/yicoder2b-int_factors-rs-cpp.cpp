#include <cmath>
#include <iostream>
#include <vector>

std::vector<int> factor(int num) {
  std::vector<int>
      factors; // creates a new vector for the factors of the number

  for (int i = 1; i <= std::floor(std::sqrt(num as float)) + 1; ++i) {
    if (num % i == 0) {
      factors.push_back(i);       // pushes smallest factor to factors
      factors.push_back(num / i); // pushes largest factor to factors
    }
  }
  return factors;
}

int main() {
  std::vector<int> result =
      factor(100); // compute the factors of 100 and save in 'result' variable.
  for (int i : result) {
    std::cout << i << " "; // print each factor followed by a space
  }
  return 0;
}