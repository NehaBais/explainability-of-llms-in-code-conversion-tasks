fn main() {
    let s = "hello".to_string();
    println!("{} literal", s);
    let s2 = format!("{} literal", s);
    println!("{}", s2);
}
