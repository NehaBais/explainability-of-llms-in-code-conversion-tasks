extern crate itertools; // Import the 'itertools' crate for use in Rust
use itertools::Itertools;

fn main() {
    let my_strings = vec!["prepended to".to_string(), "my string".to_string()];
    let prepended: String = my_strings.into_iter().collect();
    println!("{}", prepended);
}
