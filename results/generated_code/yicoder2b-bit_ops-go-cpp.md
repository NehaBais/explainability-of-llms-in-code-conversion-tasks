This is the converted C++ code:

```cpp
#include <iostream>
using namespace std;

void bitwise(int16_t a, int16_t b) {
    cout << "a:   " << (unsigned int)(a & 0xFFFF) << endl;
    cout << "b:   " << (unsigned int)(b & 0xFFFF) << endl;

    // Bitwise logical operations
    cout << "and: " << (unsigned int)(a & b) << endl;
    cout << "or:  " << (unsigned int)(a | b) << endl;
    cout << "xor: " << (unsigned int)(a ^ b) << endl;
    cout << "not: " << ~(a & 0xFFFF) << endl; // bitwise NOT on the first integer

    if (b < 0){
        cerr<<"Right operand is negative, but all shifts require an unsigned right operand (shift distance)."<<endl;
        return;
    }
    uint16_t ua = a & 0xFFFF;
    uint32_t ub = b & 0xFFFF;

    // Logical shifts (unsigned left operand)
    cout << "shl: " << (unsigned int)(ua<<ub) << endl;
    cout << "shr: " << (unsigned int)(ua>>ub) << endl;

    // Arithmetic shifts (signed left operand)
    cout << "las: " << (unsigned int)(a<<ub) << endl;
    cout << "ras: " << (unsigned int)(a>>ub) << endl;

    // Rotations
    cout << "rol: " << ((ua << ub)|((uint16_t)-a >> 16-ub)) << endl; // left rotate
    cout << "ror: " << (((uint16_t)-a >> ub)|(ua<<16-ub)) << endl; // right rotate
}
int main() {
    int16_t a, b = -460, c = 6;
    bitwise(c, b);
    return 0;
}
```
Please note that I have changed the way to print binary numbers in C++. It was originally used in Golang for simplicity but it can be replaced with `cout << bitset<16>(a) << "  " << bitset<16>(b)` if needed.
