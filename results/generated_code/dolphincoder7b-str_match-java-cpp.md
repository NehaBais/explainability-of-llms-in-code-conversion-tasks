Below is the C++ equivalent of your Java code:

```c++
#include <iostream>
#include <string>

bool startsWith(const std::string& str, const std::string& substr) {
    if (str.length() >= substr.length())
        return (str.substr(0, substr.length()) == substr);

    return false;
}

bool endsWith(const std::string& str, const std::string& substr) {
    size_t strLength = str.length();
    size_t subLength = substr.length();

    if (strLength >= subLength)
        return (str.substr(strLength - subLength, subLength) == substr);

    return false;
}

bool contains(const std::string& str, const std::string& substr, int startPos = 0) {
    size_t index = str.find(substr, startPos);
    if (index != std::string::npos)
        return true;

    return false;
}

int indexOf(const std::string& str, const std::string& substr, int startPos = 0) {
    size_t index = str.find(substr, startPos);
    if (index == std::string::npos)
        return -1;

    return static_cast<int>(index);
}

int main() {
    // Test cases
    std::cout << "startsWith: " << std::boolalpha << startsWith("abcd", "ab") << '\n';  // returns true
    std::cout << "endsWith: " << endsWith("abcd", "zn") << '\n';                   // returns false
    std::cout << "contains: " << contains("abab", "bb") << '\n';                     // returns false
    std::cout << "contains: " << contains("abab", "ab") << '\n';                      // returns true
    int loc = indexOf("abab", "bb");                                              // returns -1
    std::cout << "indexOf (first occurrence): " << loc << '\n';
    loc = indexOf("abab", "ab");                                                 // returns 0
    std::cout << "indexOf (second occurrence): " << loc << '\n';

    return 0;
}
```
Please note that the `std::boolalpha` is used to print boolean values as true or false, and `std::endl` is used for line feed. This can be omitted if you want to use only `'\n'` for newlines. The `static_cast<int>(index)` is needed because the default return value of `std::string::find()` function is of type `size_t`.

For C++11 and later, you can use `std::string::find_first_of()` which is more flexible than `std::string::find()`. For example:

#include <iostream>
#include <string>

bool contains(const std::string& str, const std::string& substr) {
    size_t index = str.find_first_of(substr);
    if (index != std::string::npos)
        return true;

    return false;
}

Note: The `std::string` class does not have a method to check if a string ends with another string. Instead, you can use `startsWith()` and compare the lengths of both strings to achieve this. If `str.length() >= substr.length()`, then `str` must end with `substr`.
