fn main() {
    let mut s = String::from("12345678");
    s.insert(0, '0'); // by insertion at index 0
    println!("{}", s);
}