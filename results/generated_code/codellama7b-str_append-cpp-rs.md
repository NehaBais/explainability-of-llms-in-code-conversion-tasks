To convert this code from C++ to Rust, you can use the following code:
```
fn main() {
    let mut greeting = "Hello".to_string();
    greeting.push_str(", world!");
    println!("{}", greeting);
}
```
Here's a breakdown of the changes made to the original code:

* In Rust, we use `let` instead of `std::string` to declare a variable. We also use `to_string()` method to convert a string literal to an owned string.
* Instead of using `append()`, we use `push_str()` method to append a string literal to a string.
* In Rust, we use `println!()` macro to print the contents of a variable to the console. The `!` in `println!()` indicates that it's a function-like macro and not a regular function.

Note that Rust does not have a null-terminated string type, so we don't need to worry about memory management issues like in C++. Also, Rust has a more expressive type system than C++, so we can avoid having to use `std::string` and other low-level APIs.
