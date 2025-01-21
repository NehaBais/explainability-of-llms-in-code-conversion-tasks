fn main() {
    let mut string = String::from("def"); // Create a mutable string variable equal to "def"
    string.insert_str(0, "abc"); // Prepend the string with "abc"
    println!("{}", string); // Print the modified string
}