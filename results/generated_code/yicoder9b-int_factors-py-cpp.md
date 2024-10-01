Sure! Here is the equivalent C++ code.

Note that because C++ does not have a built-in function like `isqrt` in Python or a native list data structure, we'll use a combination of standard library functions to achieve similar functionality:

```c++
#include <iostream>
#include <vector>
#include <algorithm> 
#include <cmath>
using namespace std;

vector<int> factor(int n) {
    vector<int> factors1, factors2;
    for (int x = 1; x <= sqrt(n); ++x) {
        if (n % x == 0){
            factors1.push_back(x);
            if (x * x != n)  // Avoid duplicate when x is the square root of n
                factors2.push_back(n / x);
        }   
    }
    reverse(factors2.begin(), factors2.end());
    factors1.insert(factors1.end(), factors2.begin(), factors2.end());  // Merge two vectors
    return factors1;
}

int main() {
    for (auto i : {45, 53, 64}) {   // List of numbers to compute the factors
        cout << i << " : Factors: ";
        vector<int> result = factor(i);  // Call function to get factors
        for_each(result.begin(), result.end(), [](int val){ cout << val << ", "; }); // Print the factors 
        cout << endl;
    }
    return 0;
}
```
