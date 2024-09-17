 Here is the equivalent code in C++:
```
#include <iostream>
#include <string>
#include <sstream>
#include <vector>

int main() {
    std::vector<std::string> args(argv, argv + argc);

    int a = std::stoi(args[1]);
    int b = std::stoi(args[2]);

    std::cout << "sum:              " << a + b << '\n';
    std::cout << "difference:       " << a - b << '\n';
    std::cout << "product:          " << a * b << '\n';
    std::cout << "integer quotient: " << (int)a / b << '\n'; // truncates towards zero
    std::cout << "remainder:        " << (int)a % b << '\n'; // same sign as first operand
}
```
Note that in C++, we use the `std::stoi` function to convert a string to an integer, instead of `parse::<i32>()` from Rust. We also use the `<<` operator to insert values into the output stream.
