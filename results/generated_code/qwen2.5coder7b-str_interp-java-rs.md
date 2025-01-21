In Rust, you can achieve string interpolation using the `format!` macro. Here is how you can convert the given Java code to Rust:

```rust
fn main() {
    let adjective = "little";
    let lyric = format!("Mary had a {} lamb", adjective);
    println!("{}", lyric);
}
```

In this Rust code:
- We declare a variable `adjective` and assign it the value `"little"`.
- We use the `format!` macro to create a new string `lyric`. The `format!` macro is similar to `String.format` in Java, and it uses curly braces `{}` as placeholders for variables.
- Finally, we print the interpolated string using `println!`.
