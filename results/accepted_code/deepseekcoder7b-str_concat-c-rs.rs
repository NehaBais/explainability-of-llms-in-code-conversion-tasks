fn main() {
    let s = "hello"; // String variable equal to any text value.

    // Concatenate with another string literal.
    let s2 = format!("{}{}", s, " literal");

    println!("{}", s); // Show the content of the variables.
    println!("{}", s2);
}
