In Rust, there is no built-in function to print in each line so we will use println! macro for the same. Here's your Python code converted into Rust.

```rust
fn logic(a: bool, b: bool) {
    println!("a and b: {}", a && b);
    println!("a or b: {}", a || b);
    println!("not a: {}", !a);
}

fn main() {
    logic(true, false);
}
```

This Rust code does exactly the same as your Python function. The `println!` macro is used to print messages to the console with a newline at the end. In Rust, logical operations are done using `&&` for and operation, `||` for or operation, and `!` for not operation. Also note that boolean literals in Rust are `true` and `false`, not `True` and `False`.
