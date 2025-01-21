 Sure, here is the equivalent code in C++:

```cpp
#include <iostream>
using namespace std;

int main() {
    int a, b;
    
    cout << "Enter value of a: ";
    cin >> a;
    
    cout << "Enter value of b: ";
    cin >> b;
    
    if (a < b) {
        cout << "a is less than b" << endl;
    } else if (a > b) {
        cout << "a is greater than b" << endl;
    } else if (a == b) {
        cout << "a is equal to b" << endl;
    }
    
    return 0;
}
```

This C++ code does the following:
1. Reads two integers from the user.
2. Compares them using `if`, `else if`, and `else` statements, and prints a message based on their relationship.
