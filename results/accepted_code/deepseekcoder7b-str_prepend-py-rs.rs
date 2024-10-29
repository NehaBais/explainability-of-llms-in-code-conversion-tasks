fn main() {
    let mut s = "12345678".to_string(); // Create a variable 's' of type `String`.
    let prefix = "0"; // String to be prepended

    // Prepending the strings: Use push_str() method for concatenation in Rust as it directly appends the string to the existing one, unlike Python where we use + operator for that purpose
    s.push_str(prefix);

    println!("{}", &s); // Printing out 's' after prepending "0" to it
}
