Sure! Here's the equivalent Rust code:
```rust
fn logic(a: bool, b: bool) {
 println!("a AND b: {}", a && b);
 println!("a OR b: {}", a || b);
 println!("NOT a: {}", !a);
}
```
Note that in Rust, the logical operators `&&` and `||` are used for short-circuiting boolean expressions. This means that if the first operand evaluates to `false`, the second operand won't be evaluated at all, and the result will be `false`. If the first operand evaluates to `true`, the second operand will be evaluated regardless of its value.

