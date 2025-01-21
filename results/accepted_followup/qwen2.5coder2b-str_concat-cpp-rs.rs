fn main() {
    let s: String = "hello".to_string();
    println!("{}", s);

    let s2: String = format!("{} literal", s);
    println!("{}", s2);
}
