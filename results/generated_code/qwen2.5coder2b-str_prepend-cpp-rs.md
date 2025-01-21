In Rust, you can use the `format!` macro for string formatting. Here is how you can convert the given C++ code into Rust:

```rust
fn main() {
    let my_strings = vec!["prepended to", "my string"];
    let prepended = my_strings.iter().fold(String::new(), |acc, &s| acc + s);
    println!("{}", prepended);
}
```

This code works by first initializing a vector of strings and then using the `iter()` method to iterate over each string in the vector. The `fold` method is used to concatenate these strings into one string. The initial value for the accumulator (`acc`) is an empty string, which is produced by calling `String::new()`.
