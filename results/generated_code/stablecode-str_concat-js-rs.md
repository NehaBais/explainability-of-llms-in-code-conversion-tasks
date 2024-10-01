In Rust, you can achieve this using the `String` and `println!` macro for printing to console output. Here's how the code looks in Rust:

```rust
fn main() {
    let s = String::from("hello");
    println!("{} {}", s, " there!");
}
```

In this code:

- The `String` type is used to create a string variable named `s`.
- This `s` variable is then concatenated with the literal string `" there!"` using the `+` operator.
- Finally, the content of both variables are printed to the console output using the `println!` macro.
