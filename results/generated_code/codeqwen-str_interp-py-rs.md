The equivalent Rust code for the given Python code would be as follows:

```rust
fn main() {
    let extra = "little";
    let new_str = format!("Mary had a {} lamb.", extra);
    println!("{}", new_str);
}
```

In Rust, we use the `format!` macro to perform string interpolation. The placeholder in curly braces `{}` is replaced with the value of the variable inside it. In this case, `extra`.
