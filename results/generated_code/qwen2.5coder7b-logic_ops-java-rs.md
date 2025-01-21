Here is how you can write the same function in Rust:

```rust
fn logic(a: bool, b: bool) {
    println!("a AND b: {}", a && b);
    println!("a OR b: {}", a || b);
    println!("NOT a: {}", !a);
}
```

Just like Java, Rust uses `&&` for logical "and", `||` for logical "or" and `!` for negation. The `println!` macro is used to print output in Rust, similar to `System.out.println()` in Java.
