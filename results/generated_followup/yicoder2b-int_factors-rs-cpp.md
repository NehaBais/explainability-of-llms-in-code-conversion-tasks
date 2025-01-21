This error arises from the fact that the range-based for loop is used with a C++11 feature and it's not compatible with C++98/C++03. It can be fixed by using the traditional for loop to access each element of `result` vector separately.

Here's the entire corrected code block:
```cpp
#include <cmath>
#include <iostream>
#include <vector>

std::vector<int> factor(int num) {
  std::vector<int> factors; // creates a new vector for the factors of the number

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
      factor(100);                   // compute the factors of 100 and save in 'result' variable.
  for (int i = 0; i < result.size(); ++i) {    // traditional for loop to access each element directly
    std::cout << result[i] << " "; // print each factor followed by a space
  }
  return 0;
}
```
