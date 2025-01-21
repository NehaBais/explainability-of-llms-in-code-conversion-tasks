 Certainly! Here's how you can convert the given Go code to Rust:

```rust
fn main() {
    let mut s = String::from("world!");
    s = format!("Hello, {}", s);
    println!("{}", s);
}
```

In this Rust code:
- We create a mutable string variable `s` and initialize it with the value `"world!"`.
- We then use the `format!` macro to prepend the string literal `"Hello, "` to the existing string in `s`.
- Finally, we print the modified string.
