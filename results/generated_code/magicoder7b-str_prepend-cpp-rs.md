 In Rust, you can achieve the same functionality with a few lines of code using the `concat_all` method from the `Itertools` crate. You would need to add this to your `Cargo.toml`:

[dependencies]
itertools = "0.10"

Here is how you could rewrite the C++ code in Rust:

```rust
extern crate itertools; // Import the 'itertools' crate for use in Rust
use itertools::Itertools; 

fn main() {
    let my_strings = vec!["prepended to".to_string(), "my string".to_string()];
    let prepended: String = my_strings.into_iter().collect();
    println!("{}", prepended);
}
```
This Rust code does the same as your C++ version, except it uses `vec!` for initializing a vector of strings (like in C++, you should use `std::vector<std::string>` to create one) and collects all items into a single string using the `into_iter().collect()` idiom. Also note that Rust's `String` type is equivalent to C++'s `std::string`.
