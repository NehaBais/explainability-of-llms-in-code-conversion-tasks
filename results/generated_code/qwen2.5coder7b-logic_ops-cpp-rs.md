Here's the equivalent code in Rust:

```rust
fn print_logic(a: bool, b: bool) {
    println!("a and b is {}", a && b);
    println!("a or b is {}", a || b);
    println!("not a is {}", !a);
}
```
This function does the same thing as your C++ code. It takes two boolean values, `a` and `b`, then prints out the results of logical "and", "or" operations on `a` and `b`, and a "not" operation on `a`. The Rust standard library's `println!` macro is used for outputting text to the console.
