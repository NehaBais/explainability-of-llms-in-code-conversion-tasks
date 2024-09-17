Here is the C++ equivalent of your Go code:

```C++
#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout << "enter two integers: ";
    cin >> a >> b;
    cout << a << " + " << b << " = " << (a+b) << endl;
    cout << a << " - " << b << " = " << (a-b) << endl;
    cout << a << " * " << b << " = " << (a*b) << endl;
    // integer division truncates towards 0 by default.
    if(b != 0){
        cout << a << " / " << b << " = " << (a/b) << endl;  
        // remainder operation gives the same sign as divisor.
        if(b < 0) {
            int quotient = a / abs(b);
            int remainder = a % abs(b);
            cout << a << " % " << b << " = -" << (quotient*abs(b) + remainder) << endl; 
        } else {
            cout << a << " % " << b << " = " << (a%b) << endl;  
        }
    }    
}
```
This C++ code does the same thing as your Go code: it takes two integers from user, calculates their sum, difference, product and quotient, then outputs these results. 

The integer division operation in C++ rounds towards zero if used on a mixed-type expression (an operand is of floating point type). The remainder operation also gives the same sign as its divisor. If we want to make it opposite to Go's behavior, we have to manually check and adjust the result. 

C++ does not support exponentiation operator like C/Go language does for integer numbers, you should use libraries like math.h in case of power operation on float or double. For integers there is no such thing as a built-in power function (but we can write one).

