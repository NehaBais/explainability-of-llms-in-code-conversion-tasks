In C++, bitwise operations and shifts can be performed using the same operators as in C. However, since C++ does not have built-in rotate operators, we need to implement them manually.

Here's the converted code:

```cpp
#include <iostream>

void bitwise(int a, int b) {
    std::cout << "a and b: " << (a & b) << "\n";
    std::cout << "a or b: " << (a | b) << "\n";
    std::cout << "a xor b: " << (a ^ b) << "\n";
    std::cout << "not a: " << (~a) << "\n";
    std::cout << "a << n: " << (a << b) << "\n"; /* left shift */
    std::cout << "a >> n: " << (a >> b) << "\n"; /* on most platforms: arithmetic right shift */
    unsigned int c = a;
    std::cout << "c >> b: " << (c >> b) << "\n"; /* logical right shift */
    
    // left rotate
    std::cout << "left rotate: ";
    for(int i=0; i<b; ++i) {
        if(a & 1) a = (a>>31)|(a<<1);
        else a <<= 1;
    }
    std::cout << a << "\n";
    
    // right rotate
    std::cout << "right rotate: ";
    for(int i=0; i<b; ++i) {
        if(a & (1<<(sizeof(int)*8-1))) a = (a<<31)|(a>>1);
        else a >>= 1;
    }
    std::cout << a << "\n";
}

int main() {
    bitwise(10,2);
}
```

The `bitwise` function takes two integers and performs the requested operations. The left rotate is performed by shifting to the right until all bits are in their new positions, while the right rotate shifts the bits to the left to perform the same operation.

Please note that this code assumes 32-bit integers as standard. If you're using a different size for your integer type, adjust accordingly.
