```rust
fn main() {
    let s = "Hello".to_string();
    println!("{} {}", s, "literal");
    let s2 = format!("{}{}", s, "literal");
    println!("{}", s2);
}
```
Note: Rust doesn't allow adding string literals directly in a print statement. So we use the `format!` macro to create a formatted string. The `to_string()` method is used for converting a string slice into a String object which can be concatenated with another string using the `+` operator.
