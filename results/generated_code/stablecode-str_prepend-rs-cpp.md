Below is the equivalent C++ code for the given Rust code:

```cpp
#include <iostream>
#include <string>

int main() {
    std::string s = "World";
    s = "Hello " + s;
    std::cout << s << std::endl;

    return 0;
}
```

In the above C++ code:
- The `let` keyword is replaced with `std::string`.
- Rust's `.to_string()` method call is replaced with a concatenation operation (`+`) between the string literal "Hello " and the original string variable `s`.
- The Rust `println!` macro call is replaced with C++'s `std::cout << s; std::endl;` statement for printing the final output.
