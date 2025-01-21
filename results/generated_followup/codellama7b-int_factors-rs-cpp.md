
The error is due to the use of C++11 features, such as `auto` and range-based for loops, which are not supported by the older version of C++ used in the `main()` function. The fix is to change the `main()` function to a valid C++98 `int main()` function, which does not use any C++11 features.

Here's the corrected code:
```cpp
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> factors = factor(100); // asserts that two expressions are equal to each other
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
  sort(factors.begin(), factors.end()); // sorts the factors into numerical order for viewing purposes
  return factors;
}
```
