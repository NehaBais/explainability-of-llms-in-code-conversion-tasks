 Below is the equivalent C++ code for the provided Java method -

```cpp
#include <iostream>
using namespace std;

void bitwise_operation(int a, int b) {
    cout << "a AND b: " << (a & b) << endl;
    cout << "a OR b: " << (a | b) << endl;
    cout << "a XOR b: " << (a ^ b) << endl;
    cout << "NOT a: " << ~a << endl;
    cout << "a << b: " << (a << b) << endl; // left shift
    cout << "a >> b: " << (a >> b) << endl; // arithmetic right shift
    cout << "a >>> b: " << (a >> b) << endl; // logical right shift, same as arithmetic right
}
```
Please note that there is no equivalent way in C++ to rotate left or right by a specific number of bits. In Java, we have the `Integer.rotateLeft` and `Integer.rotateRight` methods but these don't exist in plain C++. Instead, you can use bitwise operations (left shift, right shift) to achieve this. However, the amount of shifting is fixed for each operation. 

For example:
1. If you want to rotate left by `b` bits, then `(a << b)` will give you the result.
2. If you want to rotate right by `b` bits, then `(a >> b)` will give you the result.
