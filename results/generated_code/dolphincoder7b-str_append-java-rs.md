To convert the given Java code to Rust, we need to perform the following steps:

1. Import the required libraries and modules. For this specific task, we can use the `std::string` library from the standard library.
2. Create a string variable and assign it a text value using the `=`.
3. Append another string literal to the string variable using the `+=` operator.
4. Print the contents of the variable after the append operation using the `println!()` macro.

Here is the Rust code equivalent to the given Java code:
```rust
use std::string;
fn main() {
    let mut string = String::from("abc");
    println!("{}", &string);
    string += "def";
    println!("{}", &string);
}
```

This will output:

abc
abcdef
