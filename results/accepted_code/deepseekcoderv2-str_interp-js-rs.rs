fn main() {
    let original = String::from("Mary had a X lamb");
    let little = String::from("little");
    
    // Perform replacement
    let replaced = original.replace("X", &little);
    
    println!("{}", replaced); // Output: Mary had a little lamb
}