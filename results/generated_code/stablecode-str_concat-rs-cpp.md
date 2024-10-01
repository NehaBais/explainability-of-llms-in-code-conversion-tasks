Below is the equivalent C++ code for the provided Rust code. 

```cpp
#include <iostream>
#include <string>

int main() {
    std::string s = "hello";
    std::cout << s << std::endl;

    s += " world";
    std::cout << s << std::endl;

    return 0;
}
```
This C++ program first creates a string variable `s` and assigns it the value of "hello". The content of this variable is then printed to the console.

The second string variable `s1` is created by concatenating the value of `s` with the string literal " world". The final value of `s1` is then printed to the console.
