 Below is the equivalent C++ code for the given JavaScript function:

```cpp
#include <iostream>
using namespace std;

void bitwise(int a, int b){
    cout << "a AND b: " << (a & b) << endl;
    cout << "a OR b: " << (a | b) << endl;
    cout << "a XOR b: " << (a ^ b) << endl;
    cout << "NOT a: " << ~a << endl;
    cout << "a << b: " << (a << b) << endl; // left shift
    cout << "a >> b: " << (a >> b) << endl; // arithmetic right shift
    cout << "a >>> b: " << (a >> b) << endl; // logical right shift
}
```
Remember to handle any potential errors or exceptions in a robust way in real production code. For example, ensure that `b` isn't larger than the number of bits in `a`, because performing shifts on negative numbers is undefined behavior in C++. If you want your program to behave correctly in all cases, you might need to add error handling or use specific types for `a` and `b`.
