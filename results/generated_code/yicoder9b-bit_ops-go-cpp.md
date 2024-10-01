Here is the equivalent C++ code for your Golang function.
Note: The C++ language does not directly support bitwise rotation operations like Golang. Therefore this solution uses a combination of shift and mask operations to perform left and right rotations.

```c++
#include<bits/stdc++.h>
using namespace std;

void bitwise(int16_t a, int16_t b) {
    cout << "a:   " << bitset<16>(a)<< endl;
    cout << "b:   " << bitset<16>(b)<< endl;

    // Bitwise logical operations
    cout << "and: " << bitset<16>((a & b))<< endl;
    cout << "or : " << bitset<16>((a | b))<< endl;
    cout << "xor: " << bitset<16>((a ^ b))<< endl;
    cout << "not: " << bitset<16>(~a)<< endl;

    if (b < 0) {
        cout << "Right operand is negative, but all shifts require an unsigned right operand (shift distance)." << endl;
        return;
    }
    uint16_t ua = a;
    uint32_t ub = b;

    // Logical shifts (unsigned left operand)
    cout << "shl: " << bitset<16>((ua<<ub)) << endl; 
    cout << "shr: " << bitset<16>((ua>>ub)) << endl; 

    // Arithmetic shifts (signed left operand)
    cout << "las: " << bitset<16>((a<<ub)) << endl;  
    cout << "ras: " << bitset<16>((a>>ub)) << endl;   

    // Rotations 
    uint16_t mask = (1U << b) - 1; // Create a bit mask
    cout << "rol: " << bitset<16>(((a << b)|(a >> (16-b)))&mask)<< endl;  // Left rotate   
    cout << "ror: " << bitset<16>(((a >> b)|(a << (16-b)))&mask)<< endl; // Right rotate 
}
int main() {
    bitwise(-460, 6);
    return 0;
}
```
