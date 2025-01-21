Sure! Below is the equivalent code in C++:

```cpp
#include <iostream>
#include <string>

int main() {
    // Create a string variable equal to any text value.
    std::string s = "hello";
    std::cout << s << std::endl;
    
    // Create another string variable whose value is the original variable concatenated with another string literal.
    std::string s1 = s + " world";
    std::cout << s1 << std::endl;
    
    return 0;
}
```

Explanation:
- `std::string s = "hello";` creates a string variable `s` initialized to `"hello"`.
- `std::cout << s << std::endl;` prints the content of `s`.
- `std::string s1 = s + " world";` concatenates the string literal `" world"` to the string `s` and assigns it to `s1`.
- `std::cout << s1 << std::endl;` prints the content of `s1`.

This code will output:

hello
hello world
