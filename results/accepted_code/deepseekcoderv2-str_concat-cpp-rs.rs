use std::string;
fn main() {
    let mut str1: String = String::from("Hello"); // create string variable equal to text value
    println!("str1 is {}", str1);
    str1.push_str(" World");
    println!("str1 after push_str is {}", str1);
}
