In Rust, you can use the `String` type for string concatenation. Here is how to convert and run your C++ code in Rust:

```rust
fn main() {
    let mut greeting = String::from("Hello");  // create a new string variable
    greeting.push_str(", world!");   // append the string to another string literal
    println!("{}", greeting);         // show the contents of the variable after the append operation
}
```

