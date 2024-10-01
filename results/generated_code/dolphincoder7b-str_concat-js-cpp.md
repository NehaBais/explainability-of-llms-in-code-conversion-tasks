The equivalent code in C++ would look like this:

```cpp
#include <iostream>
int main() {
    std::string s = "Hello";
    std::cout << s + " there!" << std::endl; // Outputs "Hello there!"
    return 0;
}
```

In this code, we first declare a string variable named `s` and initialize it with the value `"Hello"`. We then concatenate the original value of `s`, which is `"Hello"`, with another string literal (`" there!"`), resulting in a new string. The resultant string is then printed to the console using `std::cout`.

Note that the concatenation operator (the `+` sign) is used for concatenating strings in C++, similarly to how it works in JavaScript. However, unlike in JavaScript, there's no automatic conversion from a number type to a string or vice versa when using `+` on numbers in C++.

Let me know if you have any further questions!
