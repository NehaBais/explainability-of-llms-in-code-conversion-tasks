 In Rust, you can use the `format!` macro to interpolate strings. Here's how the equivalent code in Rust would look:

```rust
fn main() {
    let str = format!("Mary had a {} lamb", "little");
    println!("{}", str);
}
```

In this Rust code, the `format!` macro is used to interpolate `{}` with `"little"` in the string. The `println!` function prints out the final string.
