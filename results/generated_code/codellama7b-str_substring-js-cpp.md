 In C++, you can use the `std::string` class to work with strings, and the `std::string::substr()` member function to extract substrings from a string. Here's an example of how you could implement the given requirements in C++:
```
#include <iostream>
#include <string>

int main() {
    std::string str = "abcdefgh";

    // Extract a substring starting from n characters in and of m length.
    int n = 2;
    int m = 3;
    std::cout << str.substr(n, m) << std::endl;  // Output: "cde"

    // Extract a substring starting from n characters in, up to the end of the string.
    std::cout << str.substr(n) << std::endl;     // Output: "cdefgh"

    // Extract the whole string minus the last character.
    std::cout << str.substring(0, str.length() - 1) << std::endl;  // Output: "abcdefg"

    // Extract a substring starting from a known character within the string and of m length.
    char known_char = 'b';
    std::cout << str.substr(str.indexOf(known_char), m) << std::endl;  // Output: "bcd"

    // Extract a substring starting from a known substring within the string and of m length.
    std::string known_substring = "bc";
    std::cout << str.substr(str.indexOf(known_substring), m) << std::endl;  // Output: "bcd"

    return 0;
}
```
In this example, we define a string `str` and then extract substrings from it using the `std::string::substr()` member function. We also use the `std::string::length()` member function to determine the length of the string, and the `std::string::indexOf()` member function to find the index of a known character or substring within the string.

Note that in C++, we use single quotes (`'`) to represent characters, while double quotes (`"`) are used to represent strings. In this example, we use both single quotes and double quotes to represent characters and strings, as appropriate for the context in which they appear.
