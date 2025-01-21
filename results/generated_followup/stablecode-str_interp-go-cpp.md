The error generated is related to the use of `std::regex_replace` function, which is not available in the C++ standard library. 

To fix this issue, we can replace `std::regex_replace` with a custom implementation using `std::regex` and `std::regex_replace`.

Here's the corrected code:

```cpp
#include 
#include 
#include 
#include 
#include 

int main() {
    std::string str = "Mary had a %s lamb";
    std::string txt = "little";

    // Custom implementation using std::regex and std::regex_replace
    auto format_specifier = std::regex("%s");
    str = std::regex_replace(str, format_specifier, txt));

    std::cout << str << std::endl;

    return 0;
}
```

In this corrected code, we use a custom implementation of string interpolation using `std::regex` and `std::regex_replace`. This approach ensures compatibility with the C++ standard library.
