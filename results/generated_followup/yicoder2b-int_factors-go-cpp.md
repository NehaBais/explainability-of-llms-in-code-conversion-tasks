This error message indicates that the C++ compiler is warning us about features being used which are not yet fully supported in our current version of C++, namely 'auto' type specifier and range-based for loop. 

The 'auto' keyword was added to allow the compiler to deduce the type of the variable from its value at compile time. This feature is known as auto-detection. However, it requires that the type be unambiguous in some way (either explicitly specified or inferred by the compiler). 

Similarly, for range-based for loop, the compiler needs to understand what sequence or collection of elements we are iterating over at compile time. This is not possible with 'auto' keyword because it does not provide this information. 

To resolve these warning messages and errors, you should ensure that your code still adheres to the standard C++ language rules. The 'auto' keyword and range-based for loop are extensions and might not be supported by all compilers or operating systems. Therefore, it's recommended to stick with standard C++ syntax if possible. 

In the corrected code below:
```cpp
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

void printFactors(long long nr) {
  if (nr < 1) {
    cout << "\nFactors of" << nr << "not computed";
    return;
  }
  vector<long long> factors;
  factors.push_back(1);
  auto apf = [&](long long p, int e) {
    int n = factors.size();
    for (int i = 0; i < e; ++i, p *= p) {
      for (int j = 0; j < n; ++j) {
        factors.push_back(factors[j] * p);
      }
    }
  };

  long long e = 0;
  while ((nr & 1) == 0) {
    ++e;
    nr >>= 1;
  }
  apf(2, e);

  for (long long d = 3; nr > 1; d += 2) {
    if (d * d > nr) {
      d = nr;
    }
    while ((nr %= d) == 0) {
      ++e;
    }
    if (e > 0) {
      apf(d, e);
    }
  }

  cout << "\nFactors: ";
  for (auto &i : factors) {
    cout << i << ' ';
  }
}
```
Please note that the above code may not compile if you don't include `std::` before `vector` and `iostream` in your #include directive.
