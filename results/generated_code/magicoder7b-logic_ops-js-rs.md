 In Rust, you can define the function like this:

```rust
fn logic(a: bool, b: bool) {
    println!("a AND b: {}", a && b);
    println!("a OR b: {}", a || b);
    println!("NOT a: {}", !a);
}
```
The Rust function `println!` is used instead of JavaScript's `print`, and the logical operators like `&&` and `||` are directly available in the language. Additionally, the `!` operator to get the "logical not" of a boolean value is directly available as well.
