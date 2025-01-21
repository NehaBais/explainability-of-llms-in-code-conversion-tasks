fn main() {
    let s: String = String::from("hello");
    println!("{}", s);
    
    let s2: String = format!("{} literal", s);
    println!("{}", s2);
}