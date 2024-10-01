Here's how you can convert the given C++ code to Rust:

```rust
fn print_logic(a: bool, b: bool) {
    println!("{}", (a && b)),;
    println!("{}", (a || b)) ;
    println!("{}", !a));
}
```
In the Rust code above:
- The function `print_logic` takes in two boolean values, `a` and `b`.
- It prints out the result of "and" and "or" on both arguments as well as "not" on the first argument.
- The `println!` macro is used to print the boolean expressions evaluated to a boolean value.
