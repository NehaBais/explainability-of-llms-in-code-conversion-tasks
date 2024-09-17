## C++ Code:
```c++
#include <iostream>
using namespace std;
int main() {
    unsigned char a = 105;
    unsigned char b = 91;
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
## Output:
```
a      = 01101001
b      = 01011011
a | b  = 01111011
a & b  = 01001001
a ^ b  = 00110010
!a     = 10010110
a << 3 = 011010000
a >> 3 = 00001101
```
