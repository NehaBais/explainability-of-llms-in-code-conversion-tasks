In Rust, the equivalent function would be like this:

```rust
fn logic(a: bool, b: bool) {
    println!("a AND b: {}", a && b);
    println!("a OR b: {}", a || b);
    println!("NOT a: {}", !a);
}
``` 

This function works in the same way as the original Java code. It takes two boolean values, `a` and `b`. The function uses Rust's built-in operators for logical AND (`&&`), OR (`||`) and NOT (`!`). It prints out results of all these operations.

