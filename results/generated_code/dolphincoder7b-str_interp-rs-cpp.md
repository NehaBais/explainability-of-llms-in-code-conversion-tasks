Sure, here's the equivalent C++ code:
```cpp
#include <iostream>
int main() {
    std::cout << "Mary had a " << "little" << " lamb\n";
    // You can specify order
    std::cout << "{" << 1 << "} had a {" << 0 << "} lamb\n";
    // Or named arguments if you prefer
    std::cout << "{name} had a {adj} lamb\n", adj="little", name="Mary";
}
```
This code uses `std::cout` to print the string with interpolation. The equivalent of Rust's `println!` is C++'s `<<`. Rust also has named arguments for strings, but they are not supported in C++, so you can't use them like this. You will need to write separate statements if you want to pass variables or values separately from the argument positions. If you prefer to name the arguments in Rust code and print them with `{adj}` and `{name}` placeholders, you would have to provide separate arguments for each placeholder. For example, `std::cout << "{name} had a {adj} lamb\n", adj="little", name="Mary";` will not work as is because C++ does not support named arguments like Rust. You can use a workaround by providing the named arguments separately in a different order to match their positions in the string, for example `std::cout << "{name} had a {adj} lamb\n", name="Mary", adj="little";`.
