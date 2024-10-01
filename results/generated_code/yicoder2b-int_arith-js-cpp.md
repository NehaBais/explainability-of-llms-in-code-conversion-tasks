This problem can be solved using the C++ language. The problem statement implies that we need to get two integers as input from the user. Then calculate the sum, difference, product, quotient and modulus of these numbers. 

Here is a C++ solution:
```cpp
#include <iostream>
using namespace std;
int main() {
    // Initialization of variables
    int a, b, sum, difference, product, remainder;
    float division, quotient;

    // Inputting two integers from user
    cout << "Enter first integer: ";
    cin >> a;
    cout << "Enter second integer: ";
    cin >> b;

    // Calculating sum, difference and product of the numbers 
    sum = a + b;
    difference = a - b;
    product = a * b;

    // Finding quotient
    quotient = static_cast<float>(a) / b;
    division = static_cast<float>(b) / a;  // To prevent division by zero error

    // Calculating modulus of numbers 
    remainder = a % b;

    // Printing results to console
    cout << "Sum is: " << sum << endl;
    cout << "Difference is: " << difference << endl;
    cout << "Product is: " << product << endl;
    cout << "Quotient (towards zero) is: " << quotient << endl;  // Rounded towards zero
    if ((a < 0 && b > 0) || (b < 0 && a > 0)) { // Check if sign of remainder and operands are different
        cout << "Remainder sign is same as the operand's sign" << endl;
    } else {
        cout << "Remainder sign is opposite to the operand's sign" << endl;  
    }
    return 0; // Terminate program successfully
}
```

The `main()` function serves as the entry point of our C++ program. We get two integers from user input, perform the operations mentioned in the problem and display the results on console. The C++ standard library `std::cout` is used to print output to console. 

Note: This code assumes that division operation by zero does not occur. If it occurs, it will be caught at compile time and the program will terminate abruptly with an error message.
