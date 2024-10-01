This code uses the `strings` package in Go to perform different types of string matching. Here's a conversion of this code to Rust:
```
use std::fmt;

fn main() {
    let first = "abracadabra";
    let second = "abr";

    println!("1. {} starts with {}: {:?}", first, second, first.starts_with(second));
    let i = first.find(second);
    if i >= 0 {
        println!("2. {} contains {}: {:?}, at location {}", first, second, i);
        for start in (i+1).. {
            if let Some(i) = first[start..].find(second) {
                println!("2.2. at location {}", start + i);
                start += i + 1;
            } else {
                break;
            }
        }
        println!("2.2. and that's all");
    }
    println!("3. {} ends with {}: {:?}", first, second, first.ends_with(second));
}
```
Note that Rust uses a different syntax for string manipulation than Go, so some of the code has been adjusted to match this. Specifically:

* `strings.HasPrefix` becomes `first.starts_with(second)`
* `strings.Index` becomes `first.find(second)`
* `strings.HasSuffix` becomes `first.ends_with(second)`
* The use of the `fmt` module has been replaced with Rust's built-in string formatting functions, such as `println!` and `format!`.
