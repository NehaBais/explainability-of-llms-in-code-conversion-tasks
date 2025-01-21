In Rust, you can achieve the same functionality using string interpolation by using placeholders in your string and then passing the corresponding values to the `println!` macro. Here is how you can convert the given C code to Rust:

```rust
fn main() {
    let extra = "little";
    println!("Mary had a {} lamb.", extra);
}
```

In this Rust code:
- The variable `extra` holds the value `"little"`.
- The `println!` macro is used with a format string that includes a placeholder `{}`.
- The value of `extra` is passed to the `println!` macro, which replaces the `{}` in the format string with the value of `extra`.

This will produce the same output as the original C code: "Mary had a little lamb."
