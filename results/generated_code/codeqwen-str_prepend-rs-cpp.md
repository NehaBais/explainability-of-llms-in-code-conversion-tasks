Here is your Rust code converted to C++:

```C++
#include <iostream>
#include <string>

int main() {
    std::string s = "World";
    s.insert(0, "Hello ");
    std::cout << s << std::endl;
    return 0;
}
```
The C++ code is almost identical to the Rust code except for a few syntax differences:

1. Instead of `to_string()` in Rust, we use `std::string`.
2. The insert method in C++ uses `insert(position, string)`, whereas in Rust it's `insert_str(position, string)`.
3. In the C++ code, `std::cout` is used for printing to the console, and `<<` is the stream insertion operator in C++ which acts like the comma operator in Rust for print formatting.
4. Instead of `println!("{}", s);`, we use `std::cout << s << std::endl;`. This prints out the string and a new line after it, which `println!` would do automatically.
