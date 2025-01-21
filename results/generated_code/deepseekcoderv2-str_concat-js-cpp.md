 Here's how you can convert the given JavaScript code to C++:

```cpp
#include <iostream>
#include <string>

int main() {
    // Create a string variable equal to any text value.
    std::string s = "hello";
    
    // Concatenate another string literal with the original variable and print it.
    std::string result = s + " there!";
    std::cout << result << std::endl;

    return 0;
}
```

In this C++ code:
- We include the necessary headers for input/output operations and string handling.
- We declare a `std::string` variable named `s` initialized with "hello".
- We create another `std::string` variable named `result` that concatenates the original string `s` with " there!".
- Finally, we print the content of the `result` variable using `std::cout`.
