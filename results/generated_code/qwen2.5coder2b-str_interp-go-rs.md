Sure, here is the equivalent Rust code for your given Golang code snippet:

```rust
fn main() {
    let str = String::from("Mary had a {} lamb");
    let txt = String::from("little");
    let out: String = format!("{}", txt);
    println!("{}", out);
}
```

In this Rust code, we use the `String` type instead of `string` and `format!` macro for string interpolation. The `String::from()` function is used to create new strings from strings literals.

Please note that Rust uses curly braces `{}` to denote placeholders in format strings.
