Sure, here is the equivalent Rust code for your Java function. 

In Rust, we use `&&`, `||` and `!` as operators to perform bitwise operations.

```rust
fn logic(a: bool, b: bool) {
    println!("a AND b: {}", a && b);
    println!("a OR b: {}", a || b);
    println!("NOT a: {}", !a);
}

fn main() {
    logic(true, false); // Outputs: a AND b: false, a OR b: true, NOT a: true
}
```

This will print the result of performing "and", "or" and "not" on the given boolean inputs.
