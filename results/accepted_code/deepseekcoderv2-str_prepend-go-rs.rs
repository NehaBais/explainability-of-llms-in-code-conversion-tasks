fn main() {
    let mut s = String::from("world!");
    s = format!("Hello, {}", s);
    println!("{}", s);
}