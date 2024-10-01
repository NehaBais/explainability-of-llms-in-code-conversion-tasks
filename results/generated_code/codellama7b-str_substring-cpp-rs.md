
Here's the Rust equivalent of the given C++ code:
```
use std::string::String;

fn main() {
    let s = String::from("0123456789");

    let n = 3;
    let m = 4;
    let c = '2';
    let sub = "456";

    println!("{}", s.substr(n, m)); // starting from n characters in and of m length
    println!("{}", s.substr(n)); // starting from n characters in, up to the end of the string
    println!("{}", s.substr(0, s.len() - 1)); // whole string minus the last character
    println!("{}", s.substr(s.find(c), m)); // starting from a known character within the string and of m length
    println!("{}", s.substr(s.find(sub), m)); // starting from a known substring within the string and of m length
}
```
Note that in Rust, `String` is used instead of `std::string` to represent strings. Also, `substr` method is used instead of `substr()` function. Additionally, `len` method is used instead of `size` property to get the length of the string.
