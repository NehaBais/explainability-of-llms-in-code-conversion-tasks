 To convert the given Rust code to C++, we need to understand that C++ does not have built-in string interpolation like Rust. However, we can achieve similar functionality using `std::stringstream` or formatted I/O (C++11 and later). Here's how you can do it in C++:

```cpp
#include <iostream>
#include <sstream>
#include <string>

int main() {
    std::string adj = "little";
    std::string name = "Mary";

    // Using positional arguments
    std::cout << name << " had a " << adj << " lamb" << std::endl;

    // Using named arguments
    std::cout << "{name} had a {adj} lamb" << std::endl;
    std::stringstream ss;
    ss << name << " had a " << adj << " lamb";
    std::string result = ss.str();
    std::cout << result << std::endl;

    return 0;
}
```

If you prefer to use C++11 and later, you can also leverage formatted I/O:


#include <iostream>
#include <string>

int main() {
    std::string adj = "little";
    std::string name = "Mary";

    // Using positional arguments
    std::cout << name << " had a " << adj << " lamb" << std::endl;

    // Using named arguments
    std::cout << "{name} had a {adj} lamb" << std::endl;
    std::string result = name + " had a " + adj + " lamb";
    std::cout << result << std::endl;

    return 0;
}


Both of these examples demonstrate string interpolation in C++. The first example uses `std::stringstream` for flexibility and the second one directly concatenates strings using the `+` operator, which is more straightforward but less flexible than `std::stringstream`.
