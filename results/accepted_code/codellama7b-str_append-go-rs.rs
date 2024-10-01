use std::fmt;
use std::string;

fn main() {
    let mut s = string::String::new();
    s.push_str("foo");
    s.push_str("bar");
    println!("{}", s);
}
