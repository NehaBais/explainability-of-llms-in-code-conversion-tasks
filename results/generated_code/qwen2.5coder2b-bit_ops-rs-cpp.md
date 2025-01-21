The equivalent C++ code for the given Rust function is:

```cpp

#include <iostream>
using namespace std;

int main() {
    
    int a = 105;
    int b = 91;
    
    cout << "a      = " << bitset<8>(a) << endl;
    cout << "b      = " << bitset<8>(b) << endl;
    cout << "a | b  = " << bitset<8>(a | b) << endl;
    cout << "a & b  = " << bitset<8>(a & b) << endl;
    cout << "a ^ b  = " << bitset<8>(a ^ b) << endl;
    cout << "!a     = " << bitset<8>(~a) << endl; // Note the use of ~ operator
    cout << "a << 3 = " << bitset<8>(a << 3) << endl;
    cout << "a >> 3 = " << bitset<8>(a >> 3) << endl;
    
    return 0;
}
```
In the C++ code, I have used the bitwise operators `|`, `&`, `^`, and `~` to perform bitwise operations. The `bitset<8>` is a type from the `<bitset>` header that can be used for converting numbers into binary strings of length 8.
The bitset functions like `bitset::operator<<` and `bitset::operator>>` are also used for performing left shift and right shift operations, respectively. Note that in C++, the operators `<<` and `>>` are only supported for integers with a width of at least 16 bits (i.e., int or unsigned int). If you need to handle numbers smaller than 16 bits, you might have to cast them to an unsigned int before performing the shift operation.
