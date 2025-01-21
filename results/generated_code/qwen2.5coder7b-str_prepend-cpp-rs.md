In Rust, you can achieve the same functionality with the following code:

```rust
fn main() {
    let my_strings = vec!["prepended to", "my string"];
    let prepended = my_strings.join(" ");
    println!("{}", prepended);
}
```

This code first creates a vector of two strings. Then, it uses the `join` method to concatenate all the strings in the vector with a space between them. Finally, it prints out the resulting string.
