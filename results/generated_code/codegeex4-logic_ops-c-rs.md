In Rust, you can use the `println!` macro instead of `printf` to print out values. However, in Rust, `bool` type doesn't implicitly convert to `int`, so we have to explicitly cast them.

Here's how the equivalent code might look like:

```rust
fn print_logic(a: bool, b: bool) {
    println!("a and b is {}", a && b);
    println!("a or b is {}", a || b);
    println!("not a is {}", !a);
}
```
This function now takes two boolean arguments `a` and `b`. It prints the result of "and" operation on both arguments, "or" operation on both arguments, as well as "not" operation on the first argument. The `println!` macro in Rust is used to print these results to the console.
