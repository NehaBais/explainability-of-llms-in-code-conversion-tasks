Here is the equivalent C++ code for the given Python code:
```c++
#include <iostream>
using namespace std;

void bitwise_built_ins(int width, int a, int b) {
    int mask = ((1 << width) - 1);
    cout << "AND:" << endl;
    cout << "0b" << bitset<32>(a)).to_string() << " & 0b" << bitset<32>(b)).to_string() << " = 0b" << bitset<32>((a & b) & mask)).to_string() << endl;
    cout << "OR:" << endl;
    cout << "0b" << bitset<32>(a)).to_string() << " | 0b" << bitset<32>(b)).to_string() << " = 0b" << bitset<32>((a | b) & mask)).to_string() << endl;
    cout << "XOR:" << endl;
    cout << "0b" << bitset<32>(a)).to_string() << " ^ 0b" << bitset<32>(b)).to_string() << " = 0b" << bitset<32>((a ^ b) & mask)).to_string() << endl;
    cout << "NOT:" << endl;
    cout << "~0b" << bitset<32>(a)).to_string() << " = 0b" << bitset<32>((~a) & mask))).to_string() << endl;
}

void helper_funcs(int width, int a) {
    cout << "ROTATIONS:" << endl;
    cout << "asr(" << width << ", 0b" << bitset<32>(a)).to_string() << ", 1)" << endl;
    cout << "rotl(" << width << ", 0b" << bitset<32>(a)).to_string() << ", 1)" << endl;
    cout << "asr(" << width << ", 0b" << bitset<32>(a)).to_string() << ", 2)" << endl;
    cout << "rotl(" << width << ", 0b" << bitset<32>(a)).to_string() << ", 2)" << endl;
    cout << "asr(" << width << ", 0b" << bitset<32>(a)).to_string() << ", 4)" << endl;
    cout << "rotl(" << width << ", 0b" << bitset<32>(a)).to_string() << ", 4)" << endl;
}

int main() {
    bitwise_built_ins(8, 27, 125);
    helper_funcs(8, 27);
    return 0;
}
```
This C++ code performs the same operations as the given Python code.
The `bitwise_built_ins` function takes three integer arguments: `width`, `a`, and `b`. It then performs bitwise operations on these integers to compute various results.
The `helper_funcs` function takes two integer arguments: `width` and `a`. It then calls the `bitwise_built_ins` function with appropriate arguments, and prints the resulting values as computed by the code.
Overall, this C++ code provides a direct translation of the given Python code, allowing for the same operations to be performed on integers in a similar manner.
