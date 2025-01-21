In Rust, you can concatenate strings using the `+` operator or using the `format!` macro. Here's how you would implement your requirement:

```rust
fn main() {
    let mut string = String::from("def");
    string = "abc".to_string() + &string;
}
```

Or using the `format!` macro:

fn main() {
    let mut string = String::from("def");
    string = format!("{}{}", "abc", string);
}

Both code snippets create a mutable string variable and then prepend another string literal to it.
