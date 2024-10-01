Sure, here is how you can write this code in Rust:
```rust
fn main() {
    let mut string = "def".to_string();
    string = format!("abc{}", &string);
    println!("{}", &string); // abcdef
}
```
This code does exactly what you have in Java - it creates a string variable and prepend the value of this variable with another string literal. The output will be `abcdef`. Note that we're using `format!()` function to concatenate strings, which is more idiomatic in Rust than `+` operator for string concatenation.
