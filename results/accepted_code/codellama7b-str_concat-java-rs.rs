fn main() {
    let s: &str = "hello";
    println!("{} literal", s);
    let s2: &str = format!("{}{} literal", s, s);
    println!("{}", s2);
}
