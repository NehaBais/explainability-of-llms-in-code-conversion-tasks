In Rust, you can achieve this by using the `+` operator in conjunction with the `to_string()` function to concatenate strings. Please note that you need to use the `println!` macro to print the content of a variable.

Here is your JavaScript code translated into Rust:

```rust
fn main() {
    let s = "hello".to_string();
    println!("{} there!", s);
}
```

When you run this program, it will output: `hello there!`.
