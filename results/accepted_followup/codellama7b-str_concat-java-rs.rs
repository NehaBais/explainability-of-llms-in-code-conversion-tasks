fn main() {
    let s = "hello";
    println!("{} literal", s);
    let s2 = format!("{}{} literal", s, s).to_string();
    println!("{}", s2);
}
