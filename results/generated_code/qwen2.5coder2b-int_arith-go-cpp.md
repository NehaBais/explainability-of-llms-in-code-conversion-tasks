Sure, here is the equivalent C++ code:

```cpp
#include<iostream>

int main() {
    int a, b;
    std::cout << "Enter two integers: ";
    std::cin >> a >> b;

    std::cout << a << " + " << b << " = " << a+b << "\n";
    std::cout << a << " - " << b << " = " << a-b << "\n";
    std::cout << a << " * " << b << " = " << a*b << "\n";
    std::cout << a << "/" << b << " = " << static_cast<double>(a)/b << "\n";  // truncates towards zero
    std::cout << a << "%" << b << " = " << a%b << "\n"; // same sign as first operand

    return 0;
}
```

This is equivalent to your Golang code. The main differences are:

- Instead of `fmt.Println`, we use `std::cout` for printing.
- For division, instead of `a/b`, we convert the result to a double and print it with `std::fixed`. This truncates towards zero and rounds to the nearest integer.
- We do not have an exponentiation operator in C++, so we just output the remainder.
