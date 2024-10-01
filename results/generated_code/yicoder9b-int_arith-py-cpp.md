The C++ equivalent of the Python code you provided is as follows. However, keep in mind that integer division does not include rounding to the nearest whole number by default. In C++, it rounds towards zero:

```cpp
#include <iostream>
using namespace std;

int main() {
    // define input variables
    int input1 = 18;
    int input2 = 7;
  
    cout << "Sum:         " << (input1 + input2) << endl;
    cout << "Difference:  " << (input1 - input2) << endl;
    cout << "Product:     " << (input1 * input2) << endl;
    cout << "Integer quotient: " << (input1 / input2) << endl;

    float rr = float(input1)/input2 ; 
    cout<<"Float Quotient:   " <<rr<<endl;
    int tt= int(rr);
    float uu = (tt - rr)*-10;  
    cout<< "Whole Remainder : "<<int(uu)<< endl; 
    cout<< "Actual Remainder: " << uu << endl;

    // exponentiation operator '**' doesn't exist in C++. use function pow() instead.
    float yy = pow(input1, input2); // equivalent to input1 ** input2 
    cout<<"Exponentiation :  " <<yy<<endl;
    return 0;
}
```
Note that in this code:
- The "pow" function from the math library is used for exponentiation. This is similar to the Python code using the double asterisk (**) operator.
- The division operation performs integer division by default, rounding towards zero as you asked. If you want it to round toward negative infinity instead of towards zero, use floor() function. 
- Remainder in C++ is calculated separately and its sign matches with the first operand.
