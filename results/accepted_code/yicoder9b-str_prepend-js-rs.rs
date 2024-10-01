fn main() {
    let mut s = String::from(", World");
    s.insert_str(0, "Hello");
    println!("{}", s);
}
