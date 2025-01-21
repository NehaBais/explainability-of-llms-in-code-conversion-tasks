 Sure! Here is the equivalent Rust code for the given JavaScript function:

```rust
fn logic(a: bool, b: bool) {
    println!("a AND b: {}", a && b);
    println!("a OR b: {}", a || b);
    println!("NOT a: {}", !a);
}

fn main() {
    let a = true;
    let b = false;
    logic(a, b);
}
```

In this Rust code:
- The `logic` function takes two boolean arguments `a` and `b`.
- It prints the results of "AND" (`&&`), "OR" (`||`), and "NOT" (`!`) operations on these arguments.
- The `main` function demonstrates how to call the `logic` function with example boolean values.
