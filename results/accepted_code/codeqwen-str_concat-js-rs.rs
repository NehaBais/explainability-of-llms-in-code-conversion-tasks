fn main() {
    // Create a string variable equal to any text value.
    let mut s = String::from("hello");
    println!("Original Variable Content: {}", &s);

    // Create another string variable whose value is the original variable concatenated with another string literal.
    s.push_str(" there!");
    println!("Concatenated Variable Content: {}", &s);
}
