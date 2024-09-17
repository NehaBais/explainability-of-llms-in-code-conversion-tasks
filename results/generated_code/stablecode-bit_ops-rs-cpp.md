Below is the equivalent C++ code for the provided Rust code:

```cpp
#include <iostream>
using namespace std;

int main() {
    unsigned char a = 105;
    unsigned char b = 91;

    cout << "a      = " << hex << setw(2) << setfill('0') << (int)a << endl;
    cout << "b      = " << hex << setw(2) << setfill('0') << (int)b << endl;
    cout << "a | b  = " << hex << setw(2) << setfill('0') << (int)(a | b)) << endl;
    cout << "a & b  = " << hex << setw(2) << setfill('0') << (int)(a & b)) << endl;
    cout << "a ^ b  = " << hex << setw(2) << setfill('0') << (int)(a ^ b)) << endl;
    cout << "!a     = " << hex << setw(2) << setfill('0') << (!a ? -1 : 0)) << endl;

    unsigned int shift = 3;
    cout << "a << " << shift << " = " << hex << setw(2) << setfill('0') << (int)(a << shift)) << endl;
    cout << "a >> " << shift << " = " << hex << setw(2) << setfill('0') << (int)(a >> shift)) << endl;

    // To handle right arithmetic shift in C++ 
    int rightArithmeticShift = 3;
    long long int shiftedValue = static_cast<long long int>((static_cast<int>(a)) >> rightArithmeticShift));
    cout << "a = " << hex << setw(2) << setfill('0') << a << endl;
    cout << "b = " << hex << setw(2) << setfill('0') << b << endl;
    cout << "a | b  = " << hex << setw(2) << setfill('0') << (int)(a | b)) << endl;
    cout << "a & b  = " << hex << setw(2) << setfill('0') << (int)(a & b)) << endl;
    cout << "a ^ b  = " << hex << setw(2) << setfill('0') << (int)(a ^ b)) << endl;
    cout << "!a     = " << hex << setw(2) << setfill('0') << (!a ? -1 : 0)) << endl;

    cout << "a << 3 = " << hex << setw(2) << setfill('0') << (int)(a << 3)) << endl;
    cout << "a >> 3 = " << hex << setw(2) << setfill('0') << (int)(a >> 3)) << endl;

    return 0;
}
```

You will need a C++ compiler to run this code. Make sure the two integers 'a' and 'b', as well as the shift amount, are all of type `unsigned char` or `int`, as per your original Rust code. The converted C++ code is based on the same logic but with C++ syntax.
