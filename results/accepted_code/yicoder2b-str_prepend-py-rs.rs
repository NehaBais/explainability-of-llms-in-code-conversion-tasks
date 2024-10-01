fn main() {
    let mut s = "12345678".to_string();
    s.insert(0, '0'); // by appending to a String
    println!("{}", s);
}
