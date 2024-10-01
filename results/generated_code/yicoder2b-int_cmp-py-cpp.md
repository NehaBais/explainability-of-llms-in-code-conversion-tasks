Sure, here is the equivalent C++ code for your Python code. Please note that in C++ we don't need to specify `if-else` conditions because C++ automatically decides the order of evaluation.

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
    } else {
        cout << "a is equal to b" << endl;
    }
    return 0;
}
```
