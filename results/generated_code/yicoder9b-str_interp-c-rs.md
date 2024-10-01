Here is the equivalent Rust code for your C program:

```rust
fn main() {
    let extra = "little";
    println!("Mary had a {} lamb.", extra);
}
```

In this Rust code, we use `println!` macro along with format syntax (`{}`) to interpolate the value of `extra` variable into the string. This is similar to using `printf` in C but uses placeholders (`{}`) instead of format specifiers (`%s`). The result will be printed on the standard output (usually your terminal).
