Here is the equivalent Rust code:
```rust
fn main() {
    let extra = "little";
    println!("Mary had a {} lamb.", extra);
}
```
The Rust equivalent of C's printf function is the println! macro. To define a variable in Rust, we use the keyword 'let'. The string interpolation is done using curly braces ('{}') inside the format string. We pass the value of `extra` as an argument to the println! macro. This replaces the defined character sequences `%s` with the values or variable values.
Note: In Rust, the return type of main() must be specified explicitly as '()'. The Rust compiler automatically adds a final semicolon if it's missing in a statement block.
