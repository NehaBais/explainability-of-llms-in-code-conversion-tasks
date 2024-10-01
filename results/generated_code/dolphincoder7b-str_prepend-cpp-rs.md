To convert the given C++ code to Rust, we can create a struct for `std::string` and create a vector of this string. We then use the accumulate function from the algorithm library to concatenate all elements in the vector into one string variable. Finally, we print the concatenated string. Here's how you can do it:
```rust
use std::collections::VecDeque;
use std::iter::FromIterator;
fn main() {
    let my_strings = VecDeque::from(["prepended to", "my string"]);
    let prepended: String = my_strings
        .into_iter()
        .fold(String::new(), |acc, x| acc + &x);
    println!("{}", prepended);
}
```
Note that there is no need for including any libraries in Rust. Also, the fold function is a bit more flexible than the accumulate function in C++ which can concatenate elements of any type into one value (which you could do with your string vector). The `prepended` variable will be automatically created as a mutable string and will then hold all concatenated values from `my_strings`.
