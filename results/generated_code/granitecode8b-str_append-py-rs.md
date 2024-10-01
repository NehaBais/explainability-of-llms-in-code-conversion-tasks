Here's the equivalent Rust code that meets your requirements:
```rust
fn main() {
 let mut str = String::from("12345678");
 str.push_str("9!");
 println!("{}", str);
}
```
In Rust, we use the `String` type to represent text values, and we initialize it with the `String::from()` function. We then append a string literal to the end of the variable using the `push_str()` method, which is more idiomatic than concatenating strings with the `+` operator. Finally, we print the contents of the variable using the `println!()` macro.

