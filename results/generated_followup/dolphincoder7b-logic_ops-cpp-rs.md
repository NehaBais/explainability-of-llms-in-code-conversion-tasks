The error "main function not found" occurs because Rust does not have its own main function. In C++, main is a special function where the program starts executing, which allows for the creation of interactive programs or command-line tools. However, in Rust, there are no main functions. This issue arises when using the `println!` macro, which requires a main function to print text. To resolve this error, you need to remove the `println!` macro and replace it with the `print!` macro, which is more suitable for the console output without the newline character at the end.

Here is the corrected code:
```rust
fn print_logic(a: bool, b: bool) {
    println!("a and b is {}", a && b);
    println!("a or b is {}", a || b);
    println!("not a is {}", !a);
}
```
