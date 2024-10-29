In C++, you can use `std::string` as a part of its standard library for strings and string manipulations. Here's the equivalent code in C++:

```cpp
#include <iostream>
#include <string>

int main() {
    std::string s = "world!";
    s = "Hello, " + s;
    
    // Printing the resulting string
    std::cout << s << std::endl;
  
    return 0;
}
```

In this C++ code, we first include the necessary headers. `<iostream>` is for input/output streams and operations like `std::cout`. `<string>` contains functionalities related to strings in C++. The main function then declares a string variable 's', assigns it the value of "world!", prepends "Hello, ", and concatenates these two with += operator to finally print out the result by using `std::cout`.

