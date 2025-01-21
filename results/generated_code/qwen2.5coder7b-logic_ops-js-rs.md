Here is your code converted from JavaScript to Rust:

```rust
fn logic(a: bool, b: bool) {
    println!("a AND b: {}", a && b);
    println!("a OR b: {}", a || b);
    println!("NOT a: {}", !a);
}

fn main() {
    let a = true;
    let b = false;
    
    logic(a,b);
}
```

This code defines a function `logic` that takes two boolean parameters, `a` and `b`. It then prints out the result of the logical AND, OR, and NOT operations on `a` and `b`. The `main` function is used to call `logic` with specific values (in this case, `true` and `false`).
