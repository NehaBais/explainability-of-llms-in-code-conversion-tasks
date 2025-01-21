 Below is the equivalent C++ code for the provided Python code that demonstrates various string comparisons and type handling:

```cpp
#include <iostream>
#include <string>
#include <typeinfo>

void compare(const std::string& a, const std::string& b) {
    std::cout << "\"" << a << "\" is of type " << typeid(a).name() 
              << " and \"" << b << "\" is of type " << typeid(b).name() << std::endl;
    
    if (a < b)      std::cout << "\"" << a << "\" is strictly less than \"" << b << "\"" << std::endl;
    if (a <= b)     std::cout << "\"" << a << "\" is less than or equal to \"" << b << "\"" << std::endl;
    if (a > b)      std::cout << "\"" << a << "\" is strictly greater than \"" << b << "\"" << std::endl;
    if (a >= b)     std::cout << "\"" << a << "\" is greater than or equal to \"" << b << "\"" << std::endl;
    if (a == b)     std::cout << "\"" << a << "\" is equal to \"" << b << "\"" << std::endl;
    if (a != b)     std::cout << "\"" << a << "\" is not equal to \"" << b << "\"" << std::endl;
    // Object identity comparisons are not applicable in C++ as they don't use pointers like in Python
}

void compare(const char* a, const char* b) {
    std::string sa(a), sb(b);
    compare(sa, sb);
}

int main() {
    compare("YUP", "YUP");
    compare("BALL", "BELL");
    // Uncomment the following lines to test numeric string comparisons
    // compare("24", "123"); // This will not work as expected due to lexicographical comparison of strings
    // compare(24, 123); // This will not work because direct integer or double comparison without type conversion is not possible in C++
    // compare(5.0, 5); // This will not work for the same reason
    
    return 0;
}
```

### Explanation:
1. **String Comparison**: The function `compare` takes two strings and compares them lexically using `<`, `<=`, etc., as per Python's behavior.
2. **Type Checking**: The type of the variables is checked using `typeid(a).name()` which gives the type name in a C++ style, similar to Python's `%r` format specifier.
3. **Lexical Order**: Lexical order (dictionary or string comparison) is handled by standard library functions and operators provided by C++.
4. **Numeric Strings**: In C++, strings representing numbers are compared lexicographically if they are not treated as numeric types directly due to type conversion issues (e.g., "24" < "123" because '1' comes before '2'). Handling of such comparisons would require explicit type conversions which are not straightforward in this context without parsing the strings as numbers for comparison.
5. **Case Sensitivity**: Since C++ does not have an inherent case-insensitivity option like Python, all string comparisons are case-sensitive by default and must be handled explicitly if needed (e.g., using `std::string` methods to convert both strings to the same case before comparing).

This example demonstrates basic string comparison techniques in C++, emphasizing type handling and lexical order without delving into complex number parsing or direct numeric comparisons.
