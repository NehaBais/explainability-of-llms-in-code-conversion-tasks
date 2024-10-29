In Rust, you can use the `push_str()` function to append a string literal to another one. Here is how this code could look like in Rust:

```rust
fn main() {
    let mut str = String::from("12345678");
    str.push_str("9!");
    println!("{}", str);
}
```
The `String` type in Rust is UTF-8 encoded by default, so you can handle strings of any kind and size efficiently. The `push_str()` function appends a string slice to the end of this String, consuming it as well. When we want to print out the final result, we use `println!()` followed by an "{}", which will be replaced with whatever value is inside our variable 'str'.

