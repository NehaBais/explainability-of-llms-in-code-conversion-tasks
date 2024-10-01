use std::string;
fn main() {
    let mut s = String::from("12345678");
    s.insert(0, "0".to_string());
    println!("{}", s);
}
