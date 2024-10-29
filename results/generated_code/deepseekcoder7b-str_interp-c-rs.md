The equivalent Rust code would be as follows:

```rust
fn main() {
    let extra = "big";
    println!("Mary had a {} lamb.", extra);
}
```

In this Rust version, `println!` macro is used for string interpolation. The `{}` inside the string will be replaced with the value of the variable `extra` at runtime. This replaces `printf` function in C and provides similar functionality in Rust.

