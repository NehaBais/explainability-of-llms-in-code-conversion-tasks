fn main() {
    println!("{}", "abcd".starts_with("ab")); // returns true
    println!("{}", "abcd".ends_with("cd")); // returns false
    println!("{}", "abab".contains("ab")); // returns true
    println!("{}", "abab".contains("bb")); // returns false
    let loc = "abab".find("ab");
    match loc {
        Some(index) => println!("{}", index),
        None => println!("No Match"),
    }
    let loc2 = "abab".find("ab", loc.unwrap_or(0) + 1);
    match loc2 {
        Some(index) => println!("{}", index),
        None => println!("No Match"),
    }
}
