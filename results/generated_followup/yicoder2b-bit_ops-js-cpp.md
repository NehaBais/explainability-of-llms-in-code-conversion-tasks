```cpp
#include <iostream>
using namespace std;

int main() {
    // Assign values to variables
    unsigned char a = 5, b = 0xFF;
  
    cout << "a AND b: " << (a & b) << endl;
    cout << "a OR b: " << (a | b) << endl;
    cout << "a XOR b: " << (a ^ b) << endl;
    cout << "NOT a: " << ~a << endl;
    cout << "a << b: " << (a << 0x1f) << endl; // left shift by 5 bits
    cout << "a >> b: " << (a >> b) << endl; // arithmetic right shift by 8 bits
    cout << "a >>> b: " << (a >> b) << endl; // logical right shift by 3 bits
  
    return 0;
}
```

Explanation: In the first code block, JavaScript is used to display the binary and decimal equivalent of a number. The binary equivalent is represented by `alert(...)` and for arithmetic operation we use `console.log()`.

The second code block in C++ uses standard libraries to perform bitwise operations on characters. For instance, `a & b` performs AND bitwise operation between bits of 'a' and 'b'. 

When you run this program, it will print the binary equivalent of each number as well as the results for the bitwise operations (`AND`, `OR`, `XOR`) on the numbers.
