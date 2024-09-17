Here is the code in C++:

```cpp
#include <iostream>
using namespace std;

int main() {
    int input1, input2;
    cout << "Enter two integers: ";
    cin >> input1 >> input2;
  
    int sum = input1 + input2;
    cout << "Sum: " << sum << endl;

    int difference = input1 - input2;
    cout << "Difference: " << difference << endl;

    int product = input1 * input2;
    cout << "Product: " << product << endl;

    int quotient = input1 / input2;
    float floatQuotient = static_cast<float>(input1) / static_cast<float>(input2);
    cout << "Integer Quotient: " << quotient << endl;
    cout << "Float Quotient: " << floatQuotient << endl;

    int remainder = input1 % input2;
    bool isNegative = (((input1 < 0) ^ (input2 < 0)) && remainder);  // If both signs are different and the remainder is not zero then it's negative.
    if(IsNegative){
        remainder *= -1;
    }
    cout << "Remainder: " << remainder << endl;

    int exponentiation = input1;
    for (int i = 2; i <= input2; ++i) {
        exponentiation *= input1;
    }
    cout << "Exponentiation: " << exponentiation << endl;

    return 0;
}
```

This C++ code does exactly the same as your Python code. Please note that when it comes to handling user inputs, this program uses `std::cin` and `std::cout`. When you want to display output in C++, use `std::cout` or a similar function. 

In terms of remainder calculation, I made some assumptions about the rules of rounding remainders for negative numbers (as per your requirement). If the signs of both input integers are different and the remainder is non-zero, the calculated remainder will be negated. Please modify this code to match your specific requirements if needed.
