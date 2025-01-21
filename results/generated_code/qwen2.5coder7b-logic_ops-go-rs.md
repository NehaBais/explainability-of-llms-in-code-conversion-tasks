Here's how you can write the same function in Rust:

```rust
fn print_logic(a: bool, b: bool) {
    println!("a and b is {}", a && b);
    println!("a or b is {}", a || b);
    println!("not a is {}", !a);
}
```
This code does exactly the same thing as your Go code. It defines a function named `print_logic` that takes two boolean arguments (`a` and `b`) and prints out whether their "and", "or" result, and negation are true or false. The `println!()` macro is used to print text to the console in Rust, similar to `fmt.Println()` in Go. Boolean operators such as `&&`, `||`, and `!` work exactly the same way in Rust as they do in Go.
