fn main() {
    let mut s1: &str = "hello";
    println!("{} {}!", s1, "world");

    let mut s2: String = format!("{}{}", s1, " world");
    println!("{} {}", s1, s2);
}
