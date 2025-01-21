 Sure, here's how you can convert the given JavaScript code to C++:

```cpp
#include <iostream>
using namespace std;

void compare(int a, int b) {
    if (a == b) {
        cout << a << " equals " << b << endl;
    }
    if (a < b) {
        cout << a << " is less than " << b << endl;
    }
    if (a > b) {
        cout << a << " is greater than " << b << endl;
    }
}

int main() {
    int a, b;
    cout << "Enter the first integer: ";
    cin >> a;
    cout << "Enter the second integer: ";
    cin >> b;

    compare(a, b);

    return 0;
}
```

This C++ code does the following:
1. It includes the necessary headers for input and output operations.
2. It defines a function `compare` that takes two integers as parameters and compares them using comparison operators.
3. In the `main` function, it prompts the user to enter two integers, reads them from the standard input, and then calls the `compare` function with these values.
4. The results of the comparisons are printed to the standard output.
