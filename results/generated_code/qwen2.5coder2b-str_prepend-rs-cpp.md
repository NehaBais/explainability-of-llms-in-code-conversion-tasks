To convert this Rust code to C++, you would use `std::string` for the string and `insert()` method for inserting a character at the specified position. Here's how you can do it:

```cpp
#include <iostream>
#include <string>

int main() {
    std::string s = "World";
    s.insert(0, "Hello ");
    std::cout << s << std::endl;
    return 0;
}
```

This code snippet will output `Hello World`.
