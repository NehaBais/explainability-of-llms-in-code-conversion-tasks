To convert this Python code to Rust, you can use the format! macro provided by the standard library. Here is how you can do it:

```rust
fn main() {
    let extra = "little";
    let new_str = format!("Mary had a {} lamb.", extra);
    println!("{}", new_str);
}
```

In this code:
- `let extra = "little";` initializes a variable `extra` with the value `"little"`.
- `let new_str = format!("Mary had a {} lamb.", extra);` uses the `format!` macro to replace the placeholder `{}` in the string with the value of `extra`. The result is stored in the variable `new_str`.
- `println!("{}", new_str);` prints the value of `new_str`, which contains the interpolated string.
