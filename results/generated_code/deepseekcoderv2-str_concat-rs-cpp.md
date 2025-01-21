 Certainly! Below is the equivalent code in C++ that performs similar operations:

```cpp
#include <iostream>
#include <string>

int main() {
    std::string s = "hello";
    std::cout << s << std::endl;
    
    std::string s1 = s + " world";
    std::cout << s1 << std::endl;
    
    return 0;
}
```

In this C++ code:
- We declare a `std::string` variable `s` and initialize it with the string literal `"hello"`.
- We then print the content of `s` using `std::cout`.
- Next, we concatenate `" world"` to `s` and store the result in another `std::string` variable `s1`.
- Finally, we print the content of `s1` using `std::cout`.
