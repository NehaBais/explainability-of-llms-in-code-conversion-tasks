Sure, here's how you can convert the given Java code snippet into Rust:

```rust
fn main() {
    let mut string = String::from("def"); // Create a mutable string variable equal to any text value.
    string.insert_str(0, "abc"); // Prepend the string variable with another string literal.
    println!("{}", string); // Print the resulting string
}
```

In Rust, we use `String` type from standard library for handling strings. The `insert_str` method is used to insert a given string at the specified position in the string. This is equivalent to appending the new string to the original one.
