To convert the given code from C to C++, we will modify it using a mix of C and C++ concepts. Here's the corresponding C++ version:

```cpp
#include <iostream>
using namespace std;

void bitwise(int a, int b) {
    cout << "a and b: " << (a & b) << endl;
    cout << "a or b: " << (a | b) << endl;
    cout << "a xor b: " << (a ^ b) << endl;
    cout << "not a: " << (~a) << endl;
    cout << "a  left shift n: " << (a << b) << endl;
    // arithmetic right shift on most platforms, logical right shift
    unsigned int c = a;
    cout << "c  right shift n: " << (c >> b) << endl;
    /* There are no rotation operators in C++, so we can use left and right shifts 
    to simulate them */
}
```

Please note that the code provided is written to be platform-independent. On most platforms, the behavior of both `>>` and `<<` is "arithmetic" (like Python's operator for integer division). However, on some older systems (such as x86), it can behave differently. If you need a more portable solution, additional checks are needed to ensure that the output is signed or unsigned based on the input type, which may involve using the `std::bit_cast` function from `<bit>` for C++11 and later versions.

Also note that in C++, `~a` is unary negation, but in C, it is unary complement. To emulate this behavior, you can use `~(unsigned int)a`, which will cast the input to an unsigned integer before applying the bitwise NOT operation.
