The errors are due to the use of C++11 language features such as range-based for loops, and the `auto` keyword which were not available when this code was originally written in C++98.

To fix these errors you need to either upgrade your compiler to one that supports C++11 or change the code to be compatible with C++98:

```cpp
#include <iostream>
using namespace std;

void factor(int n) {
    cout << n << " : Factors: ";
    for (int x = 1; x*x <= n; ++x) {
        if (n % x == 0){
            cout << x << ", ";
            if (n/x != x) // Avoid duplicate when x is the square root of n
                cout << n / x << ", ";
        }
    }
    cout << endl;
}

int main() {
    for (int i = 0; i < 3; ++i){  // Loop to compute the factors for several numbers
       factor(45 + i); // List of numbers to compute the factors
    }
    return 0;
}
```
