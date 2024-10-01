In Rust, you can achieve this by using the `push_str` or `format!` macro. Here's how you can do it:

```rust
fn main() {
    let mut string = String::from("def");
    string.push_str("abc");

    // Alternatively, use format!
    // string = format!("{}{}", "abc", string);
}
```

Both methods are perfectly valid and will prepend the string with another string.
