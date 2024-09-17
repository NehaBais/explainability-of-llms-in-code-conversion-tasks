```cpp
#include <iostream>
#include <bitset>

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

**Note:**

* In C++, the `bitset` class is used to display the bitwise operations in binary format.
* The `~a` operator performs a bitwise NOT on `a`.
* The left and right shift operators (`<<` and `>>`) perform bitwise left and right shifts, respectively.
* The right arithmetic shift operator (`>>`) performs bitwise right shifts with sign extension.
* The left and right rotate operators are not available in C++.
