In Rust, the equivalent code would be:

```rust
fn main() {
    let mut s = String::from("hello");
    println!("{} literal", s);
    s.push_str(" literal");
    println!("{}", s);
}
```

The `String` type in Rust is very similar to `std::string` in C++. It supports the `push_str()` method that can append a string slice (`&str`) to a `String`, which is what we are doing here. In addition, `println!` macro does not automatically insert spaces between its arguments when printing out multiple variables, unlike `<<` operator in C++ which always inserts space between two adjacent strings. So, you have to pass the entire format string as an argument to `println!`.
