Here is the equivalent code in Rust:

```rust
fn main() {
    let mut s = String::new();
    s.push_str("foo");
    s.push_str("bar");
    println!("{}", s);
}
```

In this code, `String::new()` creates a new string variable. The `push_str` method is used to append another string literal to the string. Finally, the contents of the string are printed using `println!`.
