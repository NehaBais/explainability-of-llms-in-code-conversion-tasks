This is the converted code in C++:
```cpp
#include <iostream>
using namespace std;
void boolean_ops(bool a, bool b) {
    cout << (a ? "true" : "false") << " and " 
         << (b ? "true" : "false") << " -> "
         << ((a && b) ? "true" : "false") << endl;
    cout << (a ? "true" : "false") << " or " 
         << (b ? "true" : "false") << " -> "
         << ((a || b) ? "true" : "false") << endl;
    cout << (a ? "true" : "false") << " xor " 
         << (b ? "true" : "false") << " -> "
         << ((a != b) ? "true" : "false") << endl;
    cout << (a ? "true" : "false") << " not -> " 
         << ((!a) ? "true" : "false") << endl;
}
int main() {
    boolean_ops(true, true);
    boolean_ops(true, false);
    boolean_ops(false, true);
    boolean_ops(false, false);
    return 0;
}
```
The Rust code is pretty straightforward to convert into C++. You need to use `cout` instead of `print!`, and the syntax for logical operations is different in C++ (`&&`, `||`, etc.). The `?` operator in Rust corresponds to the ternary conditional operator in C++, which gives you a short-hand way to write the conditionally evaluated part.
