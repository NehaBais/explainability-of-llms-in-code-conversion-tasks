In Rust, you can use the `push` method to add a string literal to an existing string. Here's how you would convert the given C++ code to Rust:

```rust
fn main() {
    let mut greeting = String::from("Hello") ; // Create a new mutable empty string
    greeting.push_str(", world!"); // Append the string literal to the string variable
    println!("{}", greeting); // Print the contents of the string variable after the append operation
}
```

Note that `push_str` is used because it's designed for appending multiple strings, whereas `append` would add a single string.
