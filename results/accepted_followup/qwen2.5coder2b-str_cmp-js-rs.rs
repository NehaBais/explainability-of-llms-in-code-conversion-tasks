fn main() {
    println!("{}", 123 == 123); // true
    println!("{}", "abcd".eq("abcd")); // true
    println!("{}", 123 > 123); // false
    println!("{}", 123 <= 123); // true
    println!("{}", 123 < 123); // false
    println!("{}", 123 >= 123); // true
    println!("{}", "ABCD".eq("abcd")); // false
    println!("{}", "ABCD".ne("abcd")); // true
    println!("{}", "abcd".lt("dcba")); // true
    println!("{}", "abcd".gt("dcba")); // false
    println!("{}", "ABCD".to_lowercase() == "abcd".to_lowercase()); // true (case insensitive)
}
