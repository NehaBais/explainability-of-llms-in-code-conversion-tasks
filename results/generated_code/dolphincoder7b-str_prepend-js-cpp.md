To convert the JavaScript code to C++, you can use the `std::string` class and its `append` method for concatenating the strings. Here's an equivalent C++ code:

```cpp
#include <iostream>
#include <string>

int main() {
    std::string s = "Hello";
    s += ", World";

    std::cout << s << std::endl;
    return 0;
}
```

In this code, we create a `std::string` object called `s` and initialize it with the string literal `"Hello"`. Then, we concatenate the string literals using the `+=` operator. Finally, we output the modified string by using `std::cout`. The `<<` operator is used to write the content of the `s` variable to the console.

The equivalent code in JavaScript would be:

// JavaScript code for comparison
var s = "Hello";
s += ", World"
console.log(s);

Please note that there are no built-in methods for prepending or inserting into a string in C++. So, you would have to manually concatenate the original string with the new one using `+=` operator.
