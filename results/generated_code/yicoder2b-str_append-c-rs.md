The equivalent code in Rust would be:

```rust
fn main() {
    let mut str1 = "Good Morning".to_string();  // Create a string variable and assign value to it
    str1.push_str(" to all");  // Append another string literal to the first string variable
    println!("{}", str1); // Show the contents of the variable after the append operation
}
```
This code works exactly as per your requirement in Rust and is more idiomatic way. The `push_str` method allows us to append a string directly to another string without needing to know its length beforehand. This also allows for flexibility in your code, as you don't need to worry about the space allocated for the variable at compile time anymore.
