 In Rust, you can define the function like this:

```rust
fn logic(a: bool, b: bool) {
    println!("a AND b: {}", (a && b));
    println!("a OR b: {}", (a || b));
    println!("NOT a: {}", !a);
}
```
In the above function definition, `&&` and `||` are equivalent to `&` and `|` in Java. And `!` is used for negation of boolean value.
