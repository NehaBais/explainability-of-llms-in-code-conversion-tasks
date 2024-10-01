The code you provided is in Java, and it uses the `String` class to create a string with interpolation of a variable. In C++, we can use the same concept but with a different syntax. Here's an example of how you could implement this in C++:
```cpp
#include <string>

int main() {
    std::string adjective = "little";
    std::string lyric = "Mary had a " + adjective + " lamb";
}
```
In this example, we use the `+` operator to concatenate the string literals and the variable `adjective`. The resulting string is then stored in the `lyric` variable.

Note that in C++, we don't have a built-in `String` class like in Java, so we use the `std::string` class instead. Also, in C++, you can concatenate strings using the `+=` operator instead of the `String.format()` method used in Java.
