In Rust, you can use the `String` type along with concatenation and iterators to achieve similar results. Here's your C++ code converted into a Rust program:

```rust
fn main() {
    let my_strings: Vec<&str> = vec![ "prepended to", "my string" ];
    let prepended = my_strings.iter().fold(String::new(), |a, b| a + b);
    println!("{}", prepended);
}
```

This code does the same thing as your C++ code: it creates a vector of string literals (`myStrings`), accumulates them into one single `String` using the `fold` method, and then prints that final string.

