You can do this by using the `+` operator to concatenate a string literal and a variable:
```
#include <iostream>

int main() {
    std::string s = ", World";
    s = "Hello" + s;
    std::cout << s << '\n';
    return 0;
}
```
Explanation:

* The `std::string` type is used to represent a string in C++.
* The `+` operator is used to concatenate two strings. In this case, it is used to prepend the string literal `"Hello"` to the variable `s`.
* The `std::cout` stream is used to print the resulting string to the console.
* The function `main()` is the entry point of the program and returns an integer value indicating whether the program executed successfully (0) or not (any other value).
