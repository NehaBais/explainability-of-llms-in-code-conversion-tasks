Sure, here is the equivalent code in Rust:

```rust
fn main() {
    let s = "hello";
    println!("{} literal", s);
    let s2 = format!("{}{}", &s, " literal");
    println!("{}", s2);
}
```
Please note that unlike C++, Rust doesn't have a separate `string` type. Instead, it uses `String` and `&str` to represent strings in memory. The `format!` macro is used instead of the concatenation operator (`+`) for string literals.
