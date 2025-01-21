 Here's the equivalent code written in C++:

```cpp
#include <iostream>
using namespace std;

void bitwise(int a, int b) {
    cout << "a and b: " << (a & b) << endl;
    cout << "a or b: " << (a | b) << endl;
    cout << "a xor b: " << (a ^ b) << endl;
    cout << "not a: " << (~a) << endl;
    cout << "a << n: " << (a << b) << endl; // left shift
    cout << "a >> n: " << (a >> b) << endl; // arithmetic right shift on most platforms
    
    // For logical right shift, we need to cast the integer to unsigned int
    unsigned int c = static_cast<unsigned int>(a);
    cout << "c >> n: " << (c >> b) << endl; // logical right shift
    
    // Left rotate and right rotate are not directly supported in C++
    // You can implement these using bitwise operations if needed.
}
```

In this C++ code, we use the `cout` statement from the `<iostream>` library to print the results instead of `printf`. The logical right shift is performed by casting the integer to an unsigned type, which ensures that the shift operation is logical rather than arithmetic. Note that left rotate and right rotate are not directly supported in C++, so you would need to implement these using bitwise operations if they are required for your specific use case.
