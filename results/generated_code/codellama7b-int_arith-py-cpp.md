```
#include <iostream>
using namespace std;

int main() {
    int input1, input2; // declare two integer variables

    cout << "Enter the first number: ";
    cin >> input1; // read the first number from the user

    cout << "Enter the second number: ";
    cin >> input2; // read the second number from the user

    int sum = input1 + input2; // calculate the sum of the two numbers
    cout << "Sum: " << sum << endl;

    int difference = input1 - input2; // calculate the difference between the two numbers
    cout << "Difference: " << difference << endl;

    int product = input1 * input2; // calculate the product of the two numbers
    cout << "Product: " << product << endl;

    double quotient = (double)input1 / (double)input2; // calculate the quotient of the two numbers
    cout << "Integer quotient: " << int(quotient) << endl;
    cout << "Float quotient: " << quotient << endl;

    double remainder = fmod(quotient, 1.0); // calculate the remainder of the two numbers
    cout << "Whole Remainder: " << (int)(remainder * 10) << endl;
    cout << "Actual Remainder: " << remainder << endl;

    int exponentiation = pow(input1, input2); // calculate the power of the two numbers
    cout << "Exponentiation: " << exponentiation << endl;

    return 0;
}
```
Note that in C++, the `fmod` function is used to calculate the remainder of a division operation, and the `pow` function is used to calculate the power of a number. Additionally, the `%` operator is not used for modulus operations in C++, so the `fmod` function must be used instead.
