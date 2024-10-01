fn main() {
    let s = "hello";
    println!("{} literal", s);
    let s2 = format!("{} literal", s);
    println!("{}", s2);
}
