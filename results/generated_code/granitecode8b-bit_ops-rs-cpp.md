Here is the converted code from Rust to C++:
```
#include 
using namespace std;
int main() {
 uint8_t a = 105;
 uint8_t b = 91;
 cout << "a      = " << bitset<8>(a) << endl;
 cout << "b      = " << bitset<8>(b) << endl;
 cout << "a | b  = " << bitset<8>(a | b) << endl;
 cout << "a & b  = " << bitset<8>(a & b) << endl;
 cout << "a ^ b  = " << bitset<8>(a ^ b) << endl;
 cout << "!a     = " << bitset<8>(~a) << endl;
 cout << "a << 3 = " << bitset<8>(a << 3) << endl;
 cout << "a >> 3 = " << bitset<8>(a >> 3) << endl;
 return 0;
}
```
In C++, the bitwise operators `|`, `&`, and `^` perform a bitwise OR, AND, and XOR on two integers respectively. The bitwise NOT operator `~` inverts all the bits of an integer. The left shift operator `<<` shifts the bits of an integer to the left by a specified number of positions. The right shift operator `>>` shifts the bits of an integer to the right by a specified number of positions. The right arithmetic shift operator `>>>` shifts the bits of an integer to the right by a specified number of positions, filling in the vacant positions with the most significant bit (MSB).
The left rotate operator `<<` and the right rotate operator `>>` are not standard C++ operators. However, they can be implemented using bitwise operations as follows:
- Left rotate: `(a << b) & ((1 << 32) - 1)`
- Right rotate: `(a >> b) | ((a << (32 - b)) & ((1 << 32) - 1))`

