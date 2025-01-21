Here's the equivalent code in Rust:
```rust
fn print_logic(a: bool, b: bool) {
    println!("a and b is {}", a && b);
    println!("a or b is {}", a || b);
    println!("not a is {}", !a);
}
```

The main difference is that Rust uses `bool` instead of `int` to represent logical values, and the `println!` macro instead of `printf` for output. The syntax for printing formatted strings in Rust is similar to C's, but with some differences in the formatting specifiers and syntax.
