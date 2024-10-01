Here is the equivalent code in C++:
```
#include 
using namespace std;
void boolean_ops(bool a, bool b) {
 cout << a << " and " << b << " -> " << (a && b) << endl;
 cout << a << " or " << b << " -> " << (a || b) << endl;
 cout << a << " xor " << b << " -> " << (a ^ b) << endl;
 cout << "not " << a << " -> " << (!a) << endl;
}
int main() {
 boolean_ops(true, true);
 boolean_ops(true, false);
 boolean_ops(false, true);
 boolean_ops(false, false);
 return 0;
}
```
The logic operators in C++ are similar to Rust. The "&&" operator evaluates to true if both operands are true, otherwise it evaluates to false. Similarly, the "||" operator evaluates to true if at least one operand is true, and false otherwise. The "^" operator returns true if exactly one of the operands is true. Finally, the "!" operator negates its operand.

