 Here's how you can write this in Rust:

```rust
let mut string = String::from("def"); // Create a string variable equal to any text value
string = format!("abc{}", string); // Prepend the string variable with another string literal.
```
In the above code, `String::from` is used to convert a standard string to an owned string (in Rust, strings are similar to Java's String class). The `format!` macro is used to format and return a new string.
