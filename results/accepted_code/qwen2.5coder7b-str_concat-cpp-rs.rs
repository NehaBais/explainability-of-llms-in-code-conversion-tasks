fn main() {
    let s = String::from("hello");
    println!("{} literal", s);
    let s2 = format!("{} literal", s);
    println!("{}", s2);
}