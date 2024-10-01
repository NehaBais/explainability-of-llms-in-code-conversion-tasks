 In Rust, you can use the format! macro to perform string concatenation. Here is your Python code translated into Rust:

```rust
fn main() {
    let mut s = "12345678".to_string(); // Create a string variable equal to any text value
    s = format!("0{}", s); // by concatenation
    println!("{}", s);
}
```

In this Rust code, `s` is initially a string slice ("12345678") and then we're creating a new string with the format! macro. The {} placeholders are replaced by the arguments we pass after the comma in format!. Here, "0" is the argument and `s` is the value it replaces. Finally, we print our resulting string.
