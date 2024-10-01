In C++, you can use the `std::stringstream` or `std::format` to perform the same operation as in your JavaScript example:

Using std::stringstream:
```cpp
#include <iostream>
#include <sstream>

int main() {
    std::string original = "Mary had a X lamb";
    std::string little = "big";
    std::istringstream iss(original);
    std::ostringstream oss;
    
    std::string token;
    while (iss >> token) {
        if (token == "X") {
            oss << little;
        } else {
            oss << token;
        }
        oss << ' ';  // add a space between words.
    }

    std::cout << oss.str() << '\n';

    return 0;
}
```

Using std::format (C++20 and onwards):

#include <iostream>
#include <format>

int main() {
    std::string original = "Mary had a X lamb";
    std::string little = "big";
    std::cout << std::format(original, little) << '\n';

    return 0;
}

Remember to include the appropriate headers for both methods (`<iostream>`, `<sstream>`, and `<format>`).
