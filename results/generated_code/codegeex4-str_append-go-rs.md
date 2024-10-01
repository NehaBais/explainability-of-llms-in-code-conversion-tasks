In Rust, you can use the `+` operator or `push_str()` method to append a string. Also, you don't have to use a builder for such a simple operation. Here's how your code would look like in Rust:

```rust
fn main() {
    let mut s = String::from("foo");
    s.push_str("bar");
    println!("{}", s);
}
```

In this code:
- `String::from` is used to create a new string from "foo".
- `push_str()` appends the given string slice to the end of the string.
- `println!()` prints the contents of the variable.
