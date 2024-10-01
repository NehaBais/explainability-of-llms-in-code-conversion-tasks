In C++, you can achieve this by using `std::string` along with its member functions. Here is a conversion of your Rust code to C++:

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

In this code, `std::string` is used to create a string variable similar to Rust's `String`. The member function `insert()` is used to insert the given string at the specified position. In this case, it inserts `"Hello "` at the beginning of the string. Finally, `std::cout` is used to print the string, which is equivalent to Rust's `println!()`.
