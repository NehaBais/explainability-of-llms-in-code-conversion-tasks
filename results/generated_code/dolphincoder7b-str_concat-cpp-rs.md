Sure, here's the equivalent Rust code:
```
use std::string::String;

fn main() {
    let mut s = String::from("hello");
    println!("{}", s);
    s.push_str(" literal");
    println!("{} literal", s);

    let mut s2 = s.clone();
    s2.push_str(" literal");
    println!("{}", s2);
}
```
Note: This code uses the `String` type and requires Rust's nightly feature. If you're not running it on a nightly version of Rust, you'll need to add `#![feature(str_trim)]` at the top of your file. Also note that, in this case, we don't use the `&` operator to borrow `s2`, which would be more idiomatic in Rust (and is better for performance reasons).
