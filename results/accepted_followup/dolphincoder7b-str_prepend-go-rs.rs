use std::io;
fn main() {
    let mut s: String = "world!".to_string();
    s = format!("Hello, {}", &s);
    println!("{}", s);
}
