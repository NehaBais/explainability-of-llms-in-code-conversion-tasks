The equivalent Rust code for the given Golang code is as follows:

```rust
use std::strings::Builder;
use fmt::print;

fn main() {
    let mut s = Builder::new();
    s.write_str("foo");
    s.write_str("bar");
    println!("{}", s.to_string());
}
```
