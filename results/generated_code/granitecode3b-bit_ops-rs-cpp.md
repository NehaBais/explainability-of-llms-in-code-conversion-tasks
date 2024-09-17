Sure, here's the C++ code that performs the same operations as the Rust code:
```c++
#include 
using namespace std;
 
int main() {
    unsigned char a = 105;
    unsigned char b = 91;
    cout << "a      = " << setfill('0') << setw(8) << binary << a << endl;
    cout << "b      = " << setfill('0') << setw(8) << binary << b << endl;
    cout << "a | b  = " << setfill('0') << setw(8) << binary << (a | b) << endl;
    cout << "a & b  = " << setfill('0') << setw(8) << binary << (a & b) << endl;
    cout << "a ^ b  = " << setfill('0') << setw(8) << binary << (a ^ b) << endl;
    cout << "!a     = " << setfill('0') << setw(8) << binary << (!a) << endl;
    cout << "a << 3 = " << setfill('0') << setw(8) << binary << (a << 3) << endl;
    cout << "a >> 3 = " << setfill('0') << setw(8) << binary << (a >> 3) << endl;
    return 0;
}
```
Note that the `setw` function is used to pad the output with zeros to make it 8 characters wide. The `binary` manipulator is used to convert the integer to its binary representation.

