fn main() {
    let mut greeting = String::from("Hello") ; // Create a new mutable empty string
    greeting.push_str(", world!"); // Append the string literal to the string variable
    println!("{}", greeting); // Print the contents of the string variable after the append operation
}