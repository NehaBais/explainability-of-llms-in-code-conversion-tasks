In C++, you can use the `std::string` library to manage strings. Here's how you could achieve what you want in this case:

```cpp
#include <iostream>
#include <string>

int main() {
    std::string s = "hello";
    std::cout << s + " there!\n";

    return 0;
}
```

In this code, `s` is a string variable with the value "hello", and we then print out its value concatenated with " there!". The output will be "hello there!".
Note that in C++, you have to include the header file `<iostream>` for input/output operations.
