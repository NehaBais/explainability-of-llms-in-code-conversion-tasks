The given Rust code can be translated to C++ as follows. As C++ does not have built-in support for logical operations with booleans like Rust, we will use the `<iostream>` library for output and perform calculations manually. Also, note that in cpp you don't need a semicolon at the end of each statement unless it is followed by one.
```cpp
#include <iostream>
using namespace std;

void boolean_ops(bool a, bool b) {
    cout << a << " and " << b << " -> " << (a && b) << endl;
    cout << a << " or " << b << " -> " << (a || b) << endl;
    // In cpp, the ^ operator is not equivalent to XOR in some languages. 
    // If you are looking for logical xor then you need an extra library support like boost.logic etc.
    cout << a << " xor " << b << " -> " << (a ^ b) << endl;
    cout << "not " << a << " -> " << !a << endl;  
}

int main() {
    boolean_ops(true, true);
    boolean_ops(true, false);
    boolean_ops(false, true);
    boolean_ops(false, false);
    
    return 0;
}
```
This C++ program does the same thing as your Rust code. It takes two logical values (booleans), and outputs their result of "and", "or" on both arguments, as well as "not" operation for the first argument. Note that `^` operator in cpp is not equivalent to XOR keyword in some languages like python or java etc. If you are looking for logical xor then you need an extra library support which C++ doesn't provide by default, for example: include 'boost/logic/operator/logical_and.hpp'.

