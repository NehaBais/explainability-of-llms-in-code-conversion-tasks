Below is the equivalent C++ code for the given Go code:

```cpp
#include<iostream>
using namespace std;

void printLogic(bool a, bool b) {
    cout << "a and b is " << (a && b) << endl;
    cout << "a or b is " << (a || b) << endl;
    cout << "not a is " << !a << endl;
}
```
This C++ code works similarly to the Go code provided. It defines a function `printLogic` which takes two boolean values as input and prints out the result of "and" and "or" on both arguments as well as "not" on the first argument.
