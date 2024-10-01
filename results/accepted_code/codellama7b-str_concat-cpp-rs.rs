use std::string;
fn main() {
    let s = String::from("hello");
    println!("{}{}", s, " literal");
    let s2 = s + " literal";
    println!("{}", s2);
}
