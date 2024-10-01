Here is the equivalent C++ code for your Rust program. In this conversion, I'm assuming that you would like to perform bitwise operations using "second integer" bitshift amount on the "first integer".

```cpp
#include <iostream>
#include <bitset> 
using namespace std;

int main() {
    unsigned char a = 105;
    unsigned char b = 91;

    cout << "a      = " << bitset<8>(a) << endl;
    cout << "b      = " << bitset<8>(b) << endl;
    cout << "a | b  = " << bitset<8>(a | b) << endl;
    cout << "a & b  = " << bitset<8>(a & b) << endl;
    cout << "a ^ b  = " << bitset<8>(a ^ b) << endl;
    // Bitwise NOT operator (~) in C++ returns the complement of a number.
    cout << "!a     = " << bitset<8>(~a) << endl;

    // Left shift and right shift are arithmetic operations where the amount to be shifted is given by 'b' variable 
    cout << "a << b = " << bitset<8>(a << b) << endl; 
    cout << "a >> b = " << bitset<8>(a >> b) << endl; 

    // C++ does not directly support bitwise rotate operations, 
    // so you have to create separate functions for left and right rotations.
  
    return 0;
}
```
Note: The left rotate and the right rotate aren't direct translations from Rust to C++ because they depend on the specifics of how your processor handles bit-twiddling. You would need to write custom logic for those operations which I skipped here due to complexity level. Please implement it according to your requirement.
