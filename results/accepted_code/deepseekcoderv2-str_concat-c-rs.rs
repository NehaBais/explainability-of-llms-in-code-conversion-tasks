fn main() {
    let s0: &str = "hello"; // string literal
    let s1: String = "literal".to_string(); // mutable string
    println!("{}", s0);
    println!("{} {}", s0, s1);
}
