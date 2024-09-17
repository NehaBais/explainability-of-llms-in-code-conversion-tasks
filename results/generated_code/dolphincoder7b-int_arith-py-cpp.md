This is the C++ equivalent of your Python code.
Please note, you'll need to replace `input` with `cin`, since in C++, `input` is a reserved keyword and can't be used as an identifier. Also, `str()` function isn't available in C++, so you should use a different way to convert integers to strings.
```c++
#include <iostream>
using namespace std;
int main() {
    int input1, input2;
    
    cout << "Enter first number: ";
    cin >> input1;

    cout << "Enter second number: ";
    cin >> input2;

    int sum = input1 + input2;
    cout << "Sum:		   " << sum << endl;

    int difference = input1 - input2;
    cout << "Difference: 	   " << difference << endl;

    int product = input1 * input2;
    cout << "Product: 	   " << product << endl;

    double quotient = static_cast<double>(input1) / input2;
    cout << "Integer quotient:  " << static_cast<int>(quotient) << endl; // No need for int(quotient) in C++
    cout << "Float quotient:    " << quotient << endl;

    double remainder = (static_cast<double>(input1) / input2 - static_cast<int>(quotient));
    cout << "Whole Remainder:   " << static_cast<int>(remainder * 10) << endl; // No need for int(remainder*10) in C++
    cout << "Actual Remainder:  " << remainder << endl;

    long exponentiation = pow(input1, input2);
    cout << "Exponentiation:    " << exponentiation << endl;

    return 0;
}
```
