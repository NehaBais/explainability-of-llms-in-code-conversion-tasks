Here is the equivalent code in Rust:

```rust
fn main() {
    let str = "Mary had a {} lamb";
    let txt = "little";
    let out = format!(str, txt);
    println!("{}", out);
}
```

In this example, `{}` is used for placeholder and `format!` macro is used to replace the placeholders with the given values.
