fn main() {
    let mut s = "12345678".to_string(); // Create a string variable equal to any text value
    s = format!("0{}", s); // by concatenation
    println!("{}", s);
}
