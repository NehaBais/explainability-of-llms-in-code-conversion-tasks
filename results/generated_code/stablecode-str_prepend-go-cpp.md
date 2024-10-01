In C++, you can achieve this task as follows:
```cpp
#include <iostream>
#include <string>

int main() {

    std::string s = "world!";
    s = "Hello, " + s;

    std::cout << s << std::endl;

    return 0;
}
```
In this code:
- We include the necessary libraries for string manipulations and input/output operations.
- In the `main` function, we first declare a string variable `s` and initialize it to "world!".
- Next, we prepend the string variable with another string literal "Hello, ". To concatenate strings in C++, we use the "+" operator.
- Finally, we print out the resulting string using the `cout` object from the `iostream` library.
