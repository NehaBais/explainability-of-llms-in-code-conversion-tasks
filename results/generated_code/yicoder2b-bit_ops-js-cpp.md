Sure, the equivalent C++ code would be as follows. The comments denote what each line does in the JavaScript version.

```C++
#include <cstdint>  // Including the type uint8_t etc. which are same as int, unsigned int etc. used by JS.
using namespace std; // Using standard namespace for ease of use.
void bitwise(uint8_t a, uint8_t b){
   cout << "a AND b: " << (a & b) << endl;  // Bitwise AND
   cout << "a OR b: "<< (a | b) << endl;    // Bitwise OR
   cout << "a XOR b: "<< (a ^ b) << endl;   // Bitwise XOR
   cout << "NOT a: " << ~a << endl;        // Bitwise NOT on integer 'a'. In C++, operator ~ is used to do the bitwise NOT operation and ~0u gives the maximum value for the type of variable 'b' i.e uint8_t in this case. This is equivalent to JavaScript '~' operator that flips all bits.
   cout << "a << b: " << (a << b) << endl; // Left shift
   cout << "a >> b: "<< (a >> b) << endl;  // Arithmetic right shift
   cout << "a >>> b: " << (uint8_t(a)) >> (b) << endl; // Logical right shift 
}
```
This code performs exactly the same operations as the JavaScript version. This was to be noted because C++ uses bitwise operators which are different from JavaScript's '&', '|', and '^' operator for bitwise operation. The '~' operator in C++ is used to perform a bitwise NOT on the integer but similar to '~' operator in JavaScript where it flips all bits. Also, note that right shift operations work differently in both languages. In JavaScript, when a number is divided by 2, the result is rounded down and thus effectively truncates the decimal part of the number. However, when shifting bits, these smaller parts are discarded. In C++, if you want to simulate this behavior, you can use arithmetic right shift operation which keeps all bits, but it does not exactly replicate '~' operator in JavaScript that flips all bits.
