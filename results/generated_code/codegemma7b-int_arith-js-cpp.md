```cpp
#include <iostream>

int main() {
    int a, b;

    std::cin >> a >> b;

    int sum = a + b;
    int difference = a - b;
    int product = a * b;
    int division = a / b;
    int remainder = a % b;

    std::cout << "a + b = " << sum << std::endl;
    std::cout << "a - b = " << difference << std::endl;
    std::cout << "a * b = " << product << std::endl;
    std::cout << "a / b = " << division << std::endl;
    std::cout << "a % b = " << remainder << std::endl;

    return 0;
}
```

**Explanation:**

* The code includes the necessary `<iostream>` header for input and output operations.
* It reads two integers, `a` and `b`, from the standard input.
* It calculates the sum, difference, product, division, and remainder as per the given logic.
* The `std::cout` statements are used to display the results.
* The code uses the `%d` format specifier to insert the calculated values into the output strings.

**Note:**

* The `/` operator performs integer division in C++, which means it discards the fractional part.
* The `%` operator calculates the remainder.
* The sign of the remainder matches the sign of the first operand.
