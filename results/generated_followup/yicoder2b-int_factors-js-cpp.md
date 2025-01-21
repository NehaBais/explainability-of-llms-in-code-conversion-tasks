This error appears because of incorrect usage of `cout` (Standard Output Cout), which is declared in c++ standard library header `iostream`. The symbol `count` was not recognized as being from the `__algorithm` namespace, even though it seems to be present in `c++/v1/__algorithm/count.h`.

To fix this error: 
- Include `iostream` and `std` header files at the beginning of your code so that all the standard library functions can be used.

Here is the corrected C++ code:

```cpp
#include <iostream>
#include <vector>
#include <algorithm>  // includes count from __algorithm namespace
using namespace std;

vector<int> factors(int num) {
    vector<int> n_factors;
    for (int i = 1; i <= sqrt(num); ++i) {
        if (num % i == 0) { // if 'i' is a factor of number
            n_factors.push_back(i);  // then push 'i' into the vector
            if ((num / i) != i) {   // and also push num/i (second factor of number) if it is not equal to i (first factor)
                n_factors.push_back(num / i); // then push num/i in the vector
            }
        }
    }
    return n_factors;  // return the vector of factors
}
```
