fn main() {
    let mut s = "Hello".to_string(); // Create a string variable equal to any text value
    s.insert(0, ',');
    println!("{}", &s); // Prepend the string variable with another string literal
}
