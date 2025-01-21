The error is because Rust does not allow dots (.) to appear in the crate name. The solution is to use an underscore (_) instead.

```rust
fn logic(a: bool, b: bool) {
    println!("a AND b: {}", a && b);
    println!("a OR b: {}", a || b);
    println!("NOT a: {}", !a);
}
```
