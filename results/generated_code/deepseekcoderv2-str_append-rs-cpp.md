 Certainly! Below is the equivalent code in C++ that performs the same operations as your Rust code:

```cpp
#include <iostream>
#include <string>

int main() {
    std::string hello = "Hello world";
    hello += "!!!!";  // Append using the assignment operator with a string literal
    std::cout << hello << std::endl;  // Print the contents of the variable after appending
    return 0;
}
```

In this C++ code:
- We declare a `std::string` variable named `hello` and initialize it with "Hello world".
- We use the assignment operator (`+=`) to append "!!!!" to the string.
- Finally, we print the contents of the string using `std::cout`.
