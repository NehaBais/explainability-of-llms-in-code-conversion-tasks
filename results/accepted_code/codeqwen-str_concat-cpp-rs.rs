fn main() {
    let mut s = String::from("hello");
    println!("{} literal", s);
    s.push_str(" literal");
    println!("{}", s);
}
