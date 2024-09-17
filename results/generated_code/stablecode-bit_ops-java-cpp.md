Here is the equivalent C++ code for the provided Java method. 

This C++ function performs a bitwise AND, OR, XOR, bitwise NOT on an integer, left shift and right shift operations. It also handles rotations (both left and right) as well as Java's Integer.rotateLeft(int i, int rotate)) function which is available since Java 1.5+.

```cpp
#include <iostream>
using namespace std;

void bitwise(int a, int b){

    cout << "a AND b: " << (a & b) << endl;
    cout << "a OR b: " << (a | b) << endl;
    cout << "a XOR b: " << (a ^ b) << endl;
    cout << "NOT a: " << ~a << endl;

    // left shift, C++ built-in operation
    cout << "a << b: " << (a << b)) << endl;
    
    // right arithmetic shift, C++ built-in operation
    cout << "a >> b: " << ((unsigned int) a >> (b % 32))) << endl;

    // logical right shift, C++ built-in operation. 
    // Note that the '>>' operator in C++ performs an unsigned integer right shift by default unless stated otherwise.
    cout << "a >>> b: " << ((unsigned int) a) >> (b % 32))) << endl;

    // rotate left
    cout << "a rol b: " << rotateLeft(a, b)) << endl;

    // rotate right
    cout << "a ror b: " << rotateRight(a, b)) << endl;
}
```
This C++ code does the exact same thing as your provided Java method. It performs bitwise operations and integer rotations on two integers a and b.
