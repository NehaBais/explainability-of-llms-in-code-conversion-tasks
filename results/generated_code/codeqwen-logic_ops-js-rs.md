Here is the equivalent Rust code for your JavaScript function:

```rust
fn logic(A: bool, B: bool) {
    println!("A AND B: {}", A && B);
    println!("A OR B: {}", A || B);
    println!("NOT A: {}", !A);
}
```

Note that in Rust, boolean values are represented as the type `bool`, and their "and" operator is `&&`, the "or" operator is `||`, and the "not" operator is `!`. The `println!` macro is used to print formatted text to the console.
