fn main() {
    let mut s = String::from("12345678");
    s.insert_str(0, "0"); // by concatenation
    println!("{}", s);
}
