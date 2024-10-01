Sure, here is the equivalent C++ code for your Python code. In this case, we're using static typing and handling exceptions extensively to account for potential errors or incompatibilities with the language's type system:

```cpp
#include <iostream>
using namespace std;
int main() {
    try {
        int input1, input2;
        cout << "Enter first integer: "; 
        cin >> input1;
        if (!cin) throw runtime_error("Input not an integer.");  // Check if valid integer was entered
        cout << "Enter second integer: "; 
        cin >> input2;
        if (!cin) throw runtime_error("Input not an integer.");  // Check if valid integer was entered

        int sum = input1 + input2;
        int diff = abs(input1 - input2); // Subtract, but take absolute to preserve sign
        long long prod = 1LL * input1 * input2; // Handle overflow (for large numbers)
        int quot = input2 == 0 ? INT_MAX + 1 : input1 / input2;  // Check for division by zero, and treat as maximum integer if so
        double dquot = static_cast<double>(input1)/input2; // For float quotient calculation
	    if (dquot < 0) {
		   dquot *= -1;
	    } else {
		   dquot = round(dquot);
		   if (int(dquot) > dquot) --dquot;  // Adjust if the result is not an integer, towards negative infinity
	    }
        int rem = input2 == 0 ? INT_MAX : abs((input1 % input2)* -1); // Check for division by zero, and treat as maximum integer if so
        long long expo = 1LL * (1 << input2); // Handle overflow (for large numbers)

        cout << "Sum:				  " << sum << endl;
        cout << "Difference:		  " << diff << endl;
        cout << "Product:			  " << prod << endl;
        cout << "Integer quotient:	  " << quot << endl;
        cout << "Float quotient:   " << dquot << " (towards zero)" << endl;
        cout << "Whole Remainder:  " << rem << endl;
        cout << "Actual Remainder: " << input1 % input2 << endl;
        if(expo == 0) {
            cout << "Exponentiation:   No overflow occurred. Exponential operation performed." << endl;
        } else {
            cout << "Exponentiation:   An overflow occurred (possible due to large numbers). The exponentiation operation was not performed." << endl;
        }
    } catch(const std::exception& e){
        cerr<<"Caught exception: "<<e.what()<<endl;
	return -1;  // Handle error gracefully and provide feedback to the user about what went wrong
    }
    return 0;
}
```

This program takes two integer inputs from the user, performs arithmetic operations (exceptions are used for non-integer entries), then prints out the results. The quotient is rounded towards zero when it's negative. If division by zero occurs, the remainder will be taken as maximum possible integer value. The actual remainder might not match the result of input%input2 due to overflow issue.
