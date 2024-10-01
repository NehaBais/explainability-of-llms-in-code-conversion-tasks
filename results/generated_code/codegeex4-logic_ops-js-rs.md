In Rust, you can use the `println!` macro for printing the results. Here is how you can rewrite your JavaScript function in Rust:

```rust
fn logic(a: bool, b: bool) {
    println!("a AND b: {}", a && b);
    println!("a OR b: {}", a || b);
    println!("NOT a: {}", !a);
}

fn main() {
    logic(true, true);
}
```
The `println!` macro is used to print the results of the logical operations. This is equivalent to JavaScript's `print` function but in Rust.
