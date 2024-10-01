Here is how you can convert this Python code to Rust:

In Rust, we use the format! macro for string interpolation. Note that Rust's syntax for string and character literals is quite different from Python.

```rust
let extra = "little";
let new_str = format!("Mary had a {} lamb.", extra);
println!("{}", new_str);
```

In this code, `format!` is used to interpolate the string and variable value into a single string. The `format!` macro returns a `FormatArgs` struct that can be coerced into a string using the `format!` macro's final argument. In this case, the final argument is `new_str`, which is a `&str`.

Finally, the `println!` macro is used to print the resulting string to the console.
