 In Rust, you can use the format! macro to do this instead of concatenating strings with "+=". The code would look like below:

```rust
fn main() {
    let mut string = String::from("abc");
    println!("{}", string); // print original string

    string.push_str("def"); // append string literal to the end of the variable
    
    println!("{}", string); // print updated string
}
```

This code creates a mutable String `string`, and then uses the `push_str` method on it to add "def" to the end. The contents of `string` are then printed out twice - once after initial assignment, and again after append operation.
