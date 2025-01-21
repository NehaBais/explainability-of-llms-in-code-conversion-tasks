fn main() {
    let s: &str = "hello";
    println!("{} literal", s);
    println!("{}{}", s, " literal");

    let s2 = format!("{} literal", s);
    println!("{}", s2);
}
