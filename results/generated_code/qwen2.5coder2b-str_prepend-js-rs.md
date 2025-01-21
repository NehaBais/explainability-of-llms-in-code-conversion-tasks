Sure, here's how you can convert the JavaScript code into Rust:

```rust
fn main() {
    // Define the string variable as a literal
    let s: &str = ", World";

    // Prepend the string variable with another string literal
    let result = "Hello" + s;

    // Print the resulting string
    println!("{}", result);
}
```

In Rust, we use `&str` to define a constant or a reference to a string. The `+` operator is used for concatenating two strings in Rust.
