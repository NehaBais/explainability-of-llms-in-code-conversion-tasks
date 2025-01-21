fn main() {
    let mut string = String::from("def"); // Create a mutable string variable equal to any text value.
    string.insert_str(0, "abc"); // Prepend the string variable with another string literal.
    println!("{}", string); // Print the resulting string
}