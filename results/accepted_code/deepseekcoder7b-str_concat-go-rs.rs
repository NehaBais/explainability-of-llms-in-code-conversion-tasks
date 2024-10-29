fn main() {
    // Create a String variable equal to any text value
    let mut s = String::from("hello");

    // Output the original string
    println!("{}", s);

    // Concatenate with another string literal and assign back to same variable
    s.push_str(", world!");

    // Output concatenated string
    println!("{}", s);
}
