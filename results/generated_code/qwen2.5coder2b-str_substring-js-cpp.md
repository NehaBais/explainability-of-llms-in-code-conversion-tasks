To convert this JavaScript code to C++, you would use the following code snippet:

```cpp
#include <iostream>
#include <string>

// Function definition for substr in different cases
std::string substr(const std::string& str, int start, int length) {
    if (start < 0 || start + length > str.length()) {
        return "";
    }
    return str.substr(start, length);
}

int main() {
    // Input values
    std::string str = "abcdefgh";
    int n = 2;
    int m = 3;

    // Starting from n characters in and of m length
    std::cout << substr(str, n, m) << std::endl;  // Output: cde

    // Starting from n characters in, up to the end of the string
    std::cout << substr(str, n) << std::endl;   // Output: cdefgh

    // Whole string minus the last character
    std::cout << substr(str, 0, str.length() - 1) << std::endl;  // Output: abcdefg

    // Starting from a known character within the string and of m length
    char charToFind = 'b';
    std::cout << substr(str, str.find(charToFind), m) << std::endl;  // Output: bcd

    // Starting from a known substring within the string and of m length.
    std::string subStrToFind = "bc";
    std::cout << substr(str, str.find(subStrToFind), m) << std::endl;  // Output: bcd

    return 0;
}
```
This C++ program includes a function `substr` that performs the same operations as the JavaScript version. It uses the `std::string` class and its member functions to handle substring extraction based on the provided parameters. The main function demonstrates these functionalities with different examples.
