fn main() {
    let s: String = String::from("hello");
    
    // Concatenate the original string with another string literal
    let result: String = s + " there!";
    
    // Print the results
    println!("Original string: {}", s);
    println!("Concatenated string: {}", result);
}