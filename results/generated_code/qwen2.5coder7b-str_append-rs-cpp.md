Here is how you can convert the given Rust code to C++:

```cpp
#include <iostream>
#include <string>

int main(){
    std::string hello = "Hello world";
    hello += "!!!!";
    std::cout << hello << std::endl;
    return 0;
}
```

The equivalent C++ code creates a string variable `hello` with the text value, then appends another string literal to it using the '+=' operator. Finally, it prints out the contents of the variable after the append operation using `std::cout`.
