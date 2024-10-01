The equivalent C++ code for the given Rust function is: 
```cpp
#include <iostream>
using namespace std;

void boolean_ops(bool a, bool b){
    cout << "a and b -> " << (a && b) << endl;
    cout << "a or b -> " << (a || b) << endl;
    cout << "a xor b -> " << (a ^ b) << endl;
    cout << "not a -> " << (!a) << endl;
}

int main(){
    boolean_ops(true, true);
    boolean_ops(true, false);
    boolean_ops(false, true);
    boolean_ops(false, false);
    return 0;
}
```
In C++, the `&&` (and), `||` (or) and `^` (xor) operators are overloaded for boolean values. And in C++, to represent not a boolean value, we use "!" operator. The main function is similar to the Rust code provided. It calls our `boolean_ops()` function with different combinations of true and false as arguments.
