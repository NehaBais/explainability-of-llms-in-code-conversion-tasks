Here is the converted code from Golang to C++:
```cpp
#include 
#include 
using namespace std;
void bitwise(int16_t a, int16_t b) {
 cout << "a: " << bitset<16>(uint16_t(a)) << endl;
 cout << "b: " << bitset<16>(uint16_t(b)) << endl;
 
 // Bitwise logical operations
 cout << "and: " << bitset<16>(uint16_t(a & b)) << endl;
 cout << "or: " << bitset<16>(uint16_t(a | b)) << endl;
 cout << "xor: " << bitset<16>(uint16_t(a ^ b)) << endl;
 cout << "not: " << bitset<16>(~uint16_t(a)) << endl;
 
 if (b < 0) {
 cout << "Right operand is negative, but all shifts require an unsigned right operand (shift distance)." << endl;
 return;
 }
 uint16_t ua = uint16_t(a);
 uint32_t ub = uint32_t(b);
 
 // Logical shifts (unsigned left operand)
 cout << "shl: " << bitset<16>(uint16_t(ua << ub)) << endl;
 cout << "shr: " << bitset<16>(uint16_t(ua >> ub)) << endl;
 
 // Arithmetic shifts (signed left operand)
 cout << "las: " << bitset<16>(uint16_t(a << ub)) << endl;
 cout << "ras: " << bitset<16>(uint16_t(a >> ub)) << endl;
 
 // Rotations
 uint32_t mask = (1 << (ub % 16)) - 1;
 cout << "rol: " << bitset<16>((ua << ub) | (uint16_t((ua & mask) >> (16 - ub)))) << endl;
 cout << "ror: " << bitset<16>((uint16_t((ua & mask) << (16 - ub)) | (ua >> ub))) << endl;
}
int main() {
 int16_t a = -460, b = 6;
 bitwise(a, b);
 return 0;
}
```
The code uses the `bitset` function from the iostream library to print the binary representation of integers. The `uint16_t` and `uint32_t` types are used to ensure that the shifts and rotates are performed on unsigned integers. The rotation operations use bitwise operations to extract the bits that need to be rotated and insert them into the correct position.

