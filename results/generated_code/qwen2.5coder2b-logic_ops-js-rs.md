Sure, here is the equivalent Rust code for the given JavaScript function:

```rust
fn logic(a: bool, b: bool) {
    println!("a AND b: {}", a && b);
    println!("a OR b: {}", a || b);
    println!("NOT a: {}", !a);
}
```

In this Rust code, we define a function called `logic` that takes two boolean arguments `a` and `b`. It then uses the logical operators `&&`, `||`, and `!` to perform "and", "or", and "not" on these arguments respectively. The results are printed using the `println!` macro.
