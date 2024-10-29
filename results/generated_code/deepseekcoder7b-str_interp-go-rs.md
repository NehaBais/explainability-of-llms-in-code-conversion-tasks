The equivalent Rust code would be as follows:

```rust
fn main() {
    let str = "Mary had a {} lamb";
    let txt = "big";
    let out = format!(str, txt);
    println!("{}", out);
}
```

In Rust, the `format!` macro is used to do string interpolation. The syntax for doing this would be exactly as in your Go code - you provide a string with placeholders (in Go's case denoted by `%s`), and then pass values into the `{}` placeholders. These values are inserted at the appropriate places in the string.

