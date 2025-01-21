fn main() {
    let s: &str = "hello"; // creating a string reference
    println!("s = {}", s); 
    let s2 = format!("{} literal", s); // concatenating two strings using `format!` macro
    println!("s2 = {}", s2);
}