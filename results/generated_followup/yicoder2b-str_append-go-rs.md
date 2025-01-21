This error arises due to two main reasons:
1) Golang used `fmt` for printing but Rust's standard library does not have an equivalent of this feature. Hence, it was unresolved import error.
2) Similarly, Rust uses the `std::strings::Builder` macro for appending strings rather than calling write_str() multiple times. This leads to another unresolved import.

The resolved version of your Golang code will look like:
```rust
use fmt::print;
use std::strings::Builder;

fn main() {
    let mut s = Builder::new();
    s.write_str("foo");
    s.write_str("bar");
    println!("{}", s.to_string());
}
```
In this Rust version of the code, `fmt` was replaced with the `print()` macro and we used the `std::strings::Builder` feature instead of calling `write_str()` multiple times to append strings.
