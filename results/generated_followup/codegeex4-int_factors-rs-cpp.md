The error occurred because the `factor` function was not defined when it was used in the assert statements. The `factor` function needs to be defined before these calls to avoid this error.

To fix this, we need to define the `factor` function before using it in the assert statements.
```cpp
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

vector<int> factor(int num) {
  vector<int> factors;
  
  for (int i = 1; i <= sqrt(num); ++i) {
    if (num % i == 0) {
      factors.push_back(i);
      factors.push_back(num / i);
    }
  }

  return factors;
}

int main() {
  assert((factor(100) == vector<int>{1, 2, 4, 5, 10, 10, 20, 25, 50, 100}));
  assert((factor(101) == vector<int>{1, 101}));

  return 0;
}
```
