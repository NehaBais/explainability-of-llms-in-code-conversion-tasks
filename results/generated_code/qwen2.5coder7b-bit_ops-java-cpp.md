Here is the equivalent C++ code for your requirements:

```c++
#include <iostream>
#include <bitset>

using namespace std;

void bitwise(int a, int b) {
    cout << "a AND b: " << (a & b) << endl;
    cout << "a OR b: " << (a | b) << endl;
    cout << "a XOR b: " << (a ^ b) << endl;
    cout << "NOT a: " << (~a) << endl;

    // left shift
    unsigned long shiftedLeft = static_cast<unsigned long>(a) << b;
    cout << "a << b: " << shiftedLeft << endl;

    // arithmetic right shift
    int shiftedRightArithmetic = (int)a >> b;
    cout << "a >> b: " << shiftedRightArithmetic << endl;

    // logical right shift
    unsigned long shiftedLogical = static_cast<unsigned long>(a) >> b;
    cout << "a >>> b: " << shiftedLogical << endl;

    // rotate left
    int rotatedLeft = (a << b) | (a >> (sizeof(a) * 8 - b));
    cout << "a rol b: " << rotatedLeft << endl;

    // rotate right
    int rotatedRight = (a >> b) | (a << (sizeof(a) * 8 - b));
    cout << "a ror b: " << rotatedRight << endl;
}

int main() {
    bitwise(5, 2);
    return 0;
}
```
Please note that the right rotate and left rotate operations are not built-in in C++, so we have to implement it manually. Also note that shifting an integer out of its size results in undefined behavior. Therefore, before shifting, you should ensure that b is within the range of valid shift values for the type of a.

In addition, be aware that the sizeof operator returns the size of the object in bytes, and since the int type on your system may have different sizes (e.g., 2 or 4 bytes), it is safer to multiply by 8 to convert the byte count to bits when calculating the shift amount.
