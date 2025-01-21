fn main() {
    let mut str = "12345678";
    *str = &str + "9!";  // Using str slice syntax here
    println!("{}", str); // This will print: 123456789!
}