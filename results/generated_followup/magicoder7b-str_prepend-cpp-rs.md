The error `can't find crate for 'itertools'` happens because Rust can't find the `itertools` package. In order to use `itertools`, you need to add it as a dependency in your `Cargo.toml`.

This will instruct Cargo, Rust's package manager, to download and include the `itertools` crate when you build your project.

The corrected code would be:

```rs
extern crate itertools; // Import the 'itertools' crate for use in Rust
use itertools::Itertools;

fn main() {
    let my_strings = vec!["prepended to".to_string(), "my string".to_string()];
    let prepended: String = my_strings.into_iter().collect();
    println!("{}", prepended);
}
```
