Here is the converted code from C++ to Rust:
```
use std::vec;
fn main() {
 let my_strings = vec!["prepended to".to_string(), "my string".to_string()];
 let prepended = my_strings.into_iter().fold("".to_string(), |a, b| a + &b);
 println!("{}", prepended);
}
```
The `include` statements in C++ are not necessary in Rust. The equivalent of the C++ code would be to import the required modules from the standard library: `std::vec`, `std::string`, and `std::io`. 
In Rust, a string variable is declared using the `let` keyword followed by an equal sign and a string literal or a function that returns a string. In this case, we are concatenating two strings literals with the `+` operator, but it would be more idiomatic to use the `String::from()` function or the `format!()` macro to create a new string from multiple parts.
The `vec!` macro is used to create a vector of strings, and the `into_iter()` method is used to iterate over the vector. The `fold` method is used to concatenate all the elements in the vector into a single string. Finally, the `println!` macro is used to print the resulting string.

