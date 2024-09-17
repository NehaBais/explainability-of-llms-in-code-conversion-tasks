Here is the equivalent C++ code:

```cpp
#include <iostream>

int main() {
    int A, B;
    std::cout << "Enter two integers: ";
    std::cin >> A >> B;

    std::cout << A << " + " << B << " = " << (A + B) << "\n";
    std::cout << A << " - " << B << " = " << (A - B) << "\n";
    std::cout << A << " * " << B << " = " << (A * B) << "\n";

    // C++ does not support floating point arithmetic for integer division.
    // If you want to get a float or double result, you can use the static_cast<double> operator.
    std::cout << A << " / " << B << " = " << (static_cast<double>(A) / B) << "\n";

    int remainder = A % B;
    std::cout << A << " % " << B << " = " << remainder << "\n";
   
    if(remainder < 0 && B > 0 || remainder > 0 && B < 0) {
        // If the signs are different, we add a negative sign.
        std::cout << A << " % " << B << " = -" << (-remainder) << "\n";
    }

    return 0;
}
```

This C++ code does everything you asked for, including the remainder and integer division. Note that C++ does not natively support floating point arithmetic with integers. Therefore, we use `static_cast<double>()` to convert one of the numbers to a double before performing the division operation. This will return a float or double result.

Also note that for the calculation of the remainder, it checks if the signs are different, and if they are it adds a negative sign before printing out the value.
