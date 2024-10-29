In Rust, you can write the equivalent code as follows -

```rust
fn logic(a: bool, b: bool) {
    println!("a AND b: {}", a && b);
    println!("a OR b: {}", a || b);
    println!("NOT a: {}", !a);
}
``` 

This Rust function takes two boolean arguments and prints the results of logical operations on them as in your original JavaScript code. The 'println!' macro is used to output text along with variables, similar to how you would use 'print' in JavaScript. In Rust, `&&`, `||` and `!` are used for AND, OR and NOT respectively.

