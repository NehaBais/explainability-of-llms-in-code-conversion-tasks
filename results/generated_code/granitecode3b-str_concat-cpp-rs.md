Here's the Rust code that accomplishes the same task:
```rust
fn main() {
 let mut s = String::from("hello");
 println!("{} literal", s);
 s.push_str(" literal");
 println!("{}", s);
}
```
The output of this program will be:

hello literal
hello literal

In Rust, we use the `String` type to represent strings, and we can concatenate strings using the `+` operator or the `push_str()` method. The `push_str()` method appends a string literal to the end of an existing `String` object.

