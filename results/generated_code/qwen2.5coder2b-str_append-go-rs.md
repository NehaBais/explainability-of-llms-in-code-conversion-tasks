To convert this Golang code to Rust, we need to import the `std::string` module and use a `String` type for our variable. We can also use the `push_str` method instead of `.WriteString` because `String` does not have an `Append` method.
Here is the equivalent code in Rust:
```rust
fn main() {
  let mut s = String::from("foo");
  s.push_str("bar");
  println!("{}", s);
}
```
The `push_str` method appends the specified string to the end of the `String` object. The result is then printed using the `println!` macro.
