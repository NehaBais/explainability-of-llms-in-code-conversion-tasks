Sure! Here is the equivalent code written in C++. It performs a bitwise AND, OR and XOR on two integers, bitwise NOT operation on the first integer, left shift, right shift, right arithmetic shift, left rotate and right rotate operations: 
```cpp
#include <iostream>
using namespace std;

void bitwise(int a, int b) {
    cout << "a and b: " << (a & b) << endl;
    cout << "a or b: " << (a | b) << endl;
    cout << "a xor b: " << (a ^ b) << endl;
    cout << "not a: " << (~a) << endl;
  
    // left shift and right arithmetic shift operations.
    cout << "a << n: " << (a << b) << endl; 
    cout << "a >> n: " << (a >> b) << endl; 

    unsigned int c = a; // converting to unsigned integer for logical right shift operation.
    // Right logic shift is done using unsigned integers in C++.
    cout << "c >> b: " << (c >> b) << endl;  

    return;
}
``` 

Please note that there's no built-in bit rotation functionality in the language itself, so for left and right rotate operations you would have to implement custom functions. Also note that the shift operators have been changed from printf to cout for output.
