fn main() {
    println!("{:?}", "abcd" == "abcd"); // true
    println!("{:?}", "abcd" != "dcba"); // false
    println!("{:?}", 123 == "123"); // true
    println!("{:?}", 123f64 != "123"); // false
    println!("{:?}", "ABCD".to_lowercase() == "abcd".to_lowercase()); // true (case insensitive)
}
