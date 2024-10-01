fn main() {
    // Create a string variable with any text value.
    let mut s = String::from("hello");

    // Print the original content of the variable.
    println!("{}", s);

    // Create another string variable whose value is
    // the original variable concatenated with another string literal.
    s.push_str(" there!");

    // Illustrate the operation by showing the content of the variables.
    println!("{}", s);
}
