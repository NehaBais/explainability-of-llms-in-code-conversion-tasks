 The error occurred because C++98 does not support automatic type deduction for ranges in `for` loops (`auto` keyword). These features are part of C++11, which is why it is giving a warning. To fix this issue you need to use a C++11 compliant compiler (one that supports C++11 or later) and update the standard with `-std=c++11` flag while compiling the code.

Here's the corrected version of your C++ code:
```cpp
#include <iostream>
#include <vector>
using namespace std;

void printFactors(long long nr) {
  if (nr <= 0) {
    cout << " Factors of " << nr << " not computed" << endl;
    return;
  }
  cout << " Factors of " << nr << ": ";
  vector<long long> fs = {1};
  auto apf = [&fs](long long p, int e) mutable {
    for (int i = 0; i < e; ++i)
      fs.push_back(fs[i] * p);
  };
  int e = 0;
  while ((nr & 1) == 0) {
    nr >>= 1;
    ++e;
  }
  apf(2, e);
  for (long long d = 3; nr > 1; d += 2) {
    int e = 0;
    while ((nr & 1) == 0) {
      nr >>= 1;
      ++e;
    }
    if (d * d <= nr)
      apf(d, e);
  }
  for (auto f : fs)
    cout << " " << f;
  cout << endl << " Number of factors = " << fs.size() << endl;
}

int main() {
  printFactors(-1);
  printFactors(0);
  printFactors(1);
  printFactors(2);
  printFactors(3);
  printFactors(53);
  printFactors(45);
  printFactors(64);
  printFactors(600851475143);
  printFactors(999999999999999989);
  
  return 0;
}
```
You need to compile the code with a C++11 compliant compiler, e.g., g++ -std=c++11 file.cpp
