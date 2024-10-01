Sure! Here's the equivalent C++ code for the given Rust code:
```c++
#include 
using namespace std;
int main() {
    bool a = true;
    bool b = true;
    cout << a << " and " << b << " -> " << (a && b) << endl;
    cout << a << " or " << b << " -> " << (a || b) << endl;
    cout << a << " xor " << b << " -> " << (a ^ b) << endl;
    cout << "! " << a << " -> " << (!a) << endl;
    return 0;
}
```
This code defines the `boolean_ops` function that takes two boolean values, and outputs the result of "and", "or", and "not" on both arguments. The main function calls this function with different argument combinations to test the output.

