fn main() {
    let mut s = String::from("12345678");
    s = "0".to_string().add(&s);
    println!("{}", s);
}
