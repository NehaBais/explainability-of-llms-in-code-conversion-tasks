 In C++, the bitwise operations are performed using the ~ operator for not, and the &, |, and ^ operators for AND, OR, and XOR, respectively. The left shift operation is performed with the << operator, while the right shift (arithmetic or logical) is done with the >> operator. 

Here's how you can implement the given code in C++:

```cpp
#include <iostream>
#include <bitset>
using namespace std;

int main() {
    uint8_t a = 105; // or any other value
    uint8_t b = 91;  // or any other value
    cout << "a      = ";
    cout << bitset<8>(a) << endl;
    cout << "b      = ";
    cout << bitset<8>(b) << endl;
    
    uint8_t a_or_b  = (a | b);
    cout << "a | b  = ";
    cout << bitset<8>(a_or_b) << endl;
    
    uint8_t a_and_b = (a & b);
    cout << "a & b  = ";
    cout << bitset<8>(a_and_b) << endl;
    
    uint8_t a_xor_b = (a ^ b);
    cout << "a ^ b  = ";
    cout << bitset<8>(a_xor_b) << endl;
    
    uint8_t not_a = ~a;
    cout << "!a     = ";
    cout << bitset<8>(not_a) << endl;
    
    uint8_t a_shifted_left_3 = (a << 3);
    cout << "a << 3 = ";
    cout << bitset<8>(a_shifted_left_3) << endl;
    
    uint8_t a_shifted_right_3 = (a >> 3);
    cout << "a >> 3 = ";
    cout << bitset<8>(a_shifted_right_3) << endl;
}
```
This code will print the binary representation of each integer in the same manner as your original Rust code.
