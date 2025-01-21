In Rust, the `&&`, `||` and `!` are not operators but methods. The `print_logic` function can be converted as follows:

```rust
fn print_logic(a: bool, b: bool) {
    println!("a and b is {}", a && b);
    println!("a or b is {}", a || b);
    println!("not a is {}", !a);
}
```

This function takes two boolean values and prints the results of "and", "or" and "not" on both arguments respectively. The `println!` macro is used for printing formatted strings to the console.
