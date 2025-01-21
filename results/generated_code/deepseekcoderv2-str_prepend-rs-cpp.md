 Here's how you can convert the given Rust code to C++:

```cpp
#include <iostream>
#include <string>

int main() {
    std::string s = "World";
    s.insert(0, "Hello ");
    std::cout << s << std::endl;
    return 0;
}
```

In this C++ code:
- We include the necessary headers for string manipulation and input/output operations.
- We create a `std::string` variable named `s` initialized with "World".
- We use the `insert` method of the `std::string` class to prepend "Hello " to the string. The first argument to `insert` is the position (0 in this case), and the second argument is the string to be inserted ("Hello ").
- Finally, we print the modified string using `std::cout`.
