fn main() {
    let s = "Hello".to_string();
    println!("{} {}", s, "literal");
    let s2 = format!("{}{}", s, "literal");
    println!("{}", s2);
}
