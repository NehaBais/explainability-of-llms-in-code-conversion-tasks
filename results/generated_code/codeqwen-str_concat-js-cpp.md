Here's how you can convert that JavaScript code to C++:

```cpp
#include <iostream>
#include <string>

int main() {
    std::string s = "hello";
    std::string t = s + " there!";

    std::cout << "Original string: " << s << std::endl;
    std::cout << "Concatenated string: " << t << std::endl;

    return 0;
}
```
This C++ code does the same as your JavaScript code: it creates a string variable `s` and assigns it the value "hello". Then, it creates another string variable `t`, which is equal to the concatenation of `s` and " there!". Finally, it prints out the values of both strings.
