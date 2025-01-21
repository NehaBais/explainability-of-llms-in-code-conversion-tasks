```rust
fn print_logic(a: bool, b: bool) {
    println!("a and b is {}", a && b);
    println!("a or b is {}", a || b);
    println!("not a is {}", !a);
}
```

In the Rust code above, the function `print_logic` takes two boolean arguments `a` and `b`, which are printed to standard output. The `std::boolalpha` macro makes bools print as "true" or "false", instead of 0 and 1. The operations `&&`, `||`, and `!` have been replaced with their Rust equivalents, which use the `&&`, `||`, and `!` operators.
