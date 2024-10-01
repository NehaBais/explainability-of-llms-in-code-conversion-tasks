Sure, here's the equivalent Rust code:
```rust
use std::string::String;
fn main() {
 let mut s = String::from("foo");
 s.push_str("bar");
 println!("{}", s);
}
```
The `push_str` method takes a string literal and appends it to the end of the string stored in `s`. The `println!` macro is used to print the contents of `s` to the console.

