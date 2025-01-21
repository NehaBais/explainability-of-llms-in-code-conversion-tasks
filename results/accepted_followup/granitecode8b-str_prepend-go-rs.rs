fn main() {
    let mut s = String::from("world!");
    s.insert_str(0, "Hello, ");
    println!("{}", s);
}
