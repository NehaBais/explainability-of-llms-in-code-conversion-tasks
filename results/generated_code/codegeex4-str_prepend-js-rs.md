Here's how you can achieve this in Rust:

```rust
fn main() {
    let mut s = ", World".to_string();
    s.insert_str(0, "Hello");
    println!("{}", s);
}
```

In this code, `s` is a mutable string that can be changed. The `.insert_str(0, "Hello")` method prepends the given string at position 0 of `s`.
