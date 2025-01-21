 Sure! Here's how you can convert the given Python function to Rust:

```rust
fn logic(a: bool, b: bool) {
    println!("a and b: {}", a && b);
    println!("a or b: {}", a || b);
    println!("not a: {}", !a);
}

fn main() {
    let a = true;
    let b = false;
    logic(a, b);
}
```

This Rust code defines a function `logic` that takes two boolean arguments and prints the results of "and" (`&&`), "or" (`||`), and "not" (`!`) operations on them. The `main` function demonstrates how to call this `logic` function with example boolean values.
