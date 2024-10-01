```
use std::string;
fn main() {
    let s = String::from("hello");
    println!("{}{}", s, " literal");
    let s2 = s + " literal";
    println!("{}", s2);
}
```
The above code can be converted to Rust as follows:

1. The first line of the C++ code `#include <string>` is equivalent to `use std::string;` in Rust. This imports the `std::string` module, which provides a type for strings.
2. In the C++ code, we define a string variable `s` and initialize it with the value `"hello"`. The equivalent line in Rust would be `let s = String::from("hello");`, where `String::from()` is used to create a new `String` instance from a string literal.
3. We print the contents of the `s` variable using the C++ statement `std::cout << s << " literal" << std::endl;`. In Rust, we can achieve the same result using the `println!()` macro: `println!("{}{}", s, " literal");`. The `{}{}` syntax is used to concatenate two string literals.
4. We define another string variable `s2` and initialize it with the value of `s` concatenated with the string literal `" literal"`. The equivalent line in Rust would be `let s2 = s + " literal";`, where the `+` operator is used to concatenate two strings.
5. We print the contents of the `s2` variable using the C++ statement `std::cout << s2 << std::endl;`. In Rust, we can achieve the same result using the `println!()` macro: `println!("{}", s2);`.
6. The function returns an integer value `0`, which is equivalent to the return type of the Rust function.

Note that in C++, the string variables `s` and `s2` are declared as `std::string` objects, while in Rust, they are declared as `String` instances.
