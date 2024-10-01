 In Rust, you can use the format! macro to combine strings together. Here's how you might achieve this in Rust:

```rust
fn main() {
    let mut str = String::from("12345678");
    str += "9!";
    println!("{}", str);
}
```
The `String::from` function is used to convert a string literal into an owned `String`. The `+=` operator can be used to append one String to another, just like in Python. The result is then printed with the `println!` macro.
