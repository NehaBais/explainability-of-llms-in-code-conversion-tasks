 To convert the given Python code to Rust, you can use the `format!` macro in Rust for string interpolation. Here is how you can do it:

```rust
fn main() {
    let extra = "little";
    let new_str = format!("Mary had a {} lamb.", extra);
    println!("{}", new_str);
}
```

In this Rust code:
- We define the variable `extra` with the value `"little"`.
- We use the `format!` macro to interpolate the value of `extra` into the string template.
- Finally, we print the interpolated string using `println!`.
