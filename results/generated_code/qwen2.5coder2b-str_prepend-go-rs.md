In Rust, you can achieve this by using string concatenation using the `+` operator. Here's how the code would look:

```rust
fn main() {
    let mut s: String = String::from("world!");
    s.insert_str(0, "Hello, ");
}
```

This will insert the string `"Hello, "` at the beginning of the `s` variable and print the result.
