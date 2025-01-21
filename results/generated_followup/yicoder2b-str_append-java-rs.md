The error `E0596` suggests that the compiler is preventing you from mutating the variable `string` because it's not marked as mutable, which is required for the `push_str()` function to work.

Here's the corrected code in Rust:
```rs
fn main() {
    let mut string = String::from("abc");
    println!("{}", &string);
    string.push_str("def");
    println!("{}", &string);
}
```
The `mut` keyword is added to the variable declaration to make it mutable, which allows the use of functions that mutate the value. This is necessary for the `push_str()` function to work correctly.
