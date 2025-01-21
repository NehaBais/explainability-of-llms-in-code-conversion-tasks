use fmt::print;
use std::strings::Builder;

fn main() {
    let mut s = Builder::new();
    s.write_str("foo");
    s.write_str("bar");
    println!("{}", s.to_string());
}