Here's the equivalent C++ code for the given Golang function:
```
#include 
using namespace std;
int main() {
    bool a = true;
    bool b = false;
    cout << "a and b is " << (a && b) << endl;
    cout << "a or b is " << (a || b) << endl;
    cout << "not a is " << (!a) << endl;
    return 0;
}
```
The C++ code uses the `&&`, `||`, and `!` operators to perform the logical operations on the boolean variables `a` and `b`. The output of the program will be:
a and b is false
a or b is true
not a is false
Note that the Golang code uses short-circuit evaluation, which means that the second operand in the "and" operation is not evaluated if the first operand is `false`. The C++ code follows standard evaluation rules, so both operands are always evaluated.

