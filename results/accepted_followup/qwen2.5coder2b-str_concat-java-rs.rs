fn main() {
    let s: &str = "hello";
    println!("s = {}", s);
    let s2 = format!("{} literal", s);
    println!("s2 = {}", s2);
}
