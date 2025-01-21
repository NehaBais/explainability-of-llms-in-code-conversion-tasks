fn main() {
    let mut s = ", World".to_string();
    s = "Hello ".to_string() + &s;
    println!("{}", s);
}
