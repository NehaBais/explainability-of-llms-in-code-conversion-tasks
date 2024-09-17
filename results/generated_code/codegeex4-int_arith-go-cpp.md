Here is the equivalent C++ code:

```cpp
#include<iostream>
#include<cmath>

int main() {
  int a, b;
  std::cout << "Enter two integers: ";
  std::cin >> a >> b;

  std::cout << a << " + " << b << " = " << a+b << "\n";
  std::cout << a << " - " << b << " = " << a-b << "\n";
  std::cout << a << " * " << b << " = " << a*b << "\n";
  std::cout << a << " / " << b << " = " << a/b << " (truncates towards zero)\n";
  std::cout << a << " % " << b << " = " << a%b << " (same sign as first operand)" << "\n";

  // Exponentiation
  double resultExponential = pow(a, b);
  std::cout << a << " ^ " << b << " = " << resultExponential << "\n";
  
  return 0;
}
```

Note that in C++, the exponentiation operator ** does not exist for integer types. The math library provides the `pow` function which performs floating-point arithmetic and returns a double.

Also, C++'s `%` operator gives the remainder of division operation. This has the same sign as the numerator if the numerator is negative (same behavior as your Golang code).
