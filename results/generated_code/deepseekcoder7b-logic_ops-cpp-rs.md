In Rust, you can use the `println!` macro to format boolean values as "true" and "false". Here's how it could be done in Rust:

```rust
fn print_logic(a: bool, b: bool) {
    println!("{}", a);
    println!("and");
    println!("{}{}", a && b);
    
    println!("{}", a);
    println!("or");
    println!("{}{}", a || b);
    
    println!("{}", a);
    println!("not");
    println!("{}{}", !a);
}
```
This function does the exact same thing as your C++ code. It takes two boolean values and prints out three lines of text for each operation:
- "operation a and b" (the result of `(a && b)`),
- "operation a or b" (the result of `(a || b)`), and
- "not operation on a" (the result of `(!a)`). 

All the operations are performed directly in the print statement, so no additional variables are needed. The string literals for the operation names ("and", "or", and "not") are printed as-is, without any formatting. For boolean results, Rust's `println!` macro automatically uses the standard textual representation of booleans (`true` or `false`).

