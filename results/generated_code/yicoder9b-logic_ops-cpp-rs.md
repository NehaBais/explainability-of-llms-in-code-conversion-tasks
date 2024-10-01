Here's how you can convert the C++ code to Rust: 

```rust
fn print_logic(a: bool, b: bool) {
    println!("{:?}", a && b); // and operator
    println!("{:?}", a || b); // or operator
    println!("{:?}", !a);     // not operator on first argument
}
```

In Rust, the `print_logic` function takes two boolean parameters. The "and" operation is performed using `&&`, and the "or" operation with `||`. The "not" operation is done with `!` for the first argument. The results are then printed to the console using `println!` macro from the standard library. 

Note: In Rust you don't need a special function to print boolean as text, just use the {:?} in `println!` which prints the debug representation of variables, and it will print true or false for booleans.
