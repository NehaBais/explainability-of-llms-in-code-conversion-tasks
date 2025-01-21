 To convert the given Java code to Rust, you can use the `format!` macro for string interpolation. Here's how you would do it:

```rust
fn main() {
    let adjective = "little";
    let lyric = format!("Mary had a {} lamb", adjective);
    println!("{}", lyric);
}
```

In this Rust code:
- `adjective` is defined as a string with the value "little".
- The `format!` macro is used to create a new string where the placeholder `{}` in the format string is replaced by the value of `adjective`.
- Finally, the interpolated string is printed using `println!`.
