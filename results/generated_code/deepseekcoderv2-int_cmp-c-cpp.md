 Sure! Here's the equivalent code in C++:

```cpp
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    if (a < b)
        cout << a << " is less than " << b << endl;

    if (a == b)
        cout << a << " is equal to " << b << endl;

    if (a > b)
        cout << a << " is greater than " << b << endl;

    return 0;
}
```

This C++ code does the following:
1. Reads two integers from the user.
2. Compares the first integer with the second integer using `if` statements and displays appropriate messages based on whether the first integer is less than, equal to, or greater than the second integer.
