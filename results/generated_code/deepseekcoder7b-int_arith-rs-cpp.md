In C++, you can use `std::cin` for getting the input from user and there is no environment variable to get command-line arguments like in Rust. Here's how it could look:

Please note that integer division in C++ will truncate towards zero when used with integers unlike some other languages where it rounds towards negative infinity. 
Also, '%' operator does not have a consistent sign rule as in some other programming languages. It follows the rules of modulus operation on floating point numbers which is dependent upon the numeric type and compiler implementation. Therefore, we can consider it to be same sign as second operand for consistency with Rust code.

```c++
#include <iostream>
using namespace std;
int main()  {
    int a , b;
    cout << "Enter first integer: ";
    cin >> a ;
    cout << "Enter second integer: ";
    cin >> b;
    
    //Displaying the results
    cout<<"sum:               "<<a+b<<endl; 
    cout<<"difference:        "<<a-b<<endl;  
    cout<<"product:           "<<a*b<<endl;  
    cout<<"integer quotient:  "<<a/b<<endl; // truncates towards zero
    cout<<"remainder:         "<< a%b << endl; // same sign as second operand
}
```
This program will ask the user to input two integers, then it calculates and displays their sum, difference, product, quotient (integer division), and remainder. As previously stated, C++ integer division rounds towards zero, which is different from languages like Python where division rounds towards negative infinity. 
In addition, % operator in C++ has the same sign rule as second operand for consistency with Rust code.

