fn main() {
    // Define the string variable as a literal
    let s: &str = ", World";

    // Prepend the string variable with another string literal
    let result = "Hello" + s;

    // Print the resulting string
    println!("{}", result);
}