use std::fmt;

fn main() {
    println!("{:?}", "abcd" == "abcd"); // true
    println!("{:?}", "abcd" != "dcba"); // false
    println!("{:?}", String::from("123") == "123".to_string()); // true
    println!("{:?}", format!("{:?}", 123f64) != "123".to_string()); // false
    println!("{:?}", "ABCD".to_lowercase() == "abcd".to_lowercase()); // true (case insensitive)
}
