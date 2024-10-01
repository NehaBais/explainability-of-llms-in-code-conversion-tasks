In C++, we can use the `std::string` class to work with strings and its various member functions, such as `substr()`, to achieve the desired functionality. Here's the code conversion:
```cpp
#include <iostream>
#include <string>

int main() {
    std::string str = "Hello World";

    // Display a substring:
    // starting from n characters in and of m length
    std::cout << str.substr(n, m) << "\n";

    // starting from n characters in, up to the end of the string
    std::cout << str.substr(n) << "\n";

    // whole string minus the last character
    std::cout << str.substr(0, str.length() - 1) << "\n";

    // starting from a known character within the string and of m length
    std::cout << str.substr(str.indexOf(c), m + 1) << "\n";

    // starting from a known substring within the string and of m length
    std::cout << str.substr(str.indexOf(sub), m + 1) << "\n";

    return 0;
}
```
In this code, we use the `std::string` class to create an object named `str` that stores the string "Hello World". We then use various methods of the `std::string` class to extract substrings from the original string and print them to the console.

The first method, `str.substr(n, m)`, returns a substring starting at character position `n` with length `m`. The second method, `str.substr(n)`, returns a substring starting at character position `n` until the end of the original string. The third method, `str.substr(0, str.length() - 1)`, returns the whole string minus the last character.

The fourth and fifth methods are similar to the first two but take in additional parameters for the known character or substring to start from, and its length. These methods return a substring starting at the position of the given character or substring with the specified length.

Please note that in C++, we need to use `std::string` instead of just `String` as the data type for strings. Also, we need to use `std::cout` instead of `System.out.println()` as the method for printing output.
