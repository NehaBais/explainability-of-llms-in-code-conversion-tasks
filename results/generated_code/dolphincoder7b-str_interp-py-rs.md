The Rust equivalent for this code is:
```rust
use std::fmt;

fn main() {
    let extra = 'little';
    let new_str = format!("Mary had a {} lamb.", extra);
    println!("{}", new_str);
}
```
Note that Rust's format function does not support string interpolation. Instead, it uses placeholders `{}` which can be replaced with the values passed to the `format!` macro. The `extra` variable is inserted into the string at the position of its placeholder and a formatted string is returned. The formatted string is then printed using `println!`.
