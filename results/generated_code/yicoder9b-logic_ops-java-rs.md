Here is the equivalent code in Rust:

```rust
fn logic(a: bool, b: bool) {
    println!("a AND b: {}", a && b);
    println!("a OR b: {}", a || b);
    println!("NOT a: {}", !a);
}
```
You can call this function with two boolean values as inputs like `logic(true, false)`. It will print the result of "and" and "or" operations on both arguments as well as the negation of the first argument.
