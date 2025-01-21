Here's how you can convert the given JavaScript code into Rust:

```rust
fn main() {
    let s = ", World";
    let result = format!("Hello{}", s);
    println!("{}", result);
}
```

In this Rust code, `format!` macro is used to prepend the string "Hello" before the variable `s`. The `println!` macro is used to print the output.
