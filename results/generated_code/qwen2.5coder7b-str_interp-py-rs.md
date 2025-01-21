In Rust, you can use the `format!` macro or the `.to_string()` method to achieve string interpolation. Here's how it would look like:

```rust
fn main() {
    let extra = "little";
    let new_str = format!("Mary had a {} lamb.", extra);
    println!("{}", new_str);
}
```

In this code, `{}` is used as the placeholder for the variable `extra`. The `format!` macro will replace `{}` with the value of `extra` and return a new string. Then we print out the new string using the `println!` macro.
