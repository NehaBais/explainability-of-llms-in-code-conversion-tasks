Sure, here is the equivalent C++ code for your requirement:

```cpp
#include <iostream>
using namespace std;

int main() {
    unsigned char a = 105;
    unsigned char b = 91;
    cout << "a      = " << (a) << endl;
    cout << "b      = " << (b) << endl;
    cout << "a | b  = " << ((a | b)) << endl;
    cout << "a & b  = " << ((a & b)) << endl;
    cout << "a ^ b  = " << ((a ^ b)) << endl;
    cout << "!a     = " << ~(a) << endl;
    cout << "a << 3 = " << (a<<3) << endl;
    cout << "a >> 3 = " << (a>>3) << endl;
    return 0;
}
```
Please keep in mind that C++ doesn't have the same bit-level operations as Rust so the result may vary. Also, right shift on a signed type will truncate towards zero instead of infinite negative numbers like Rust does.
