fn main() {
    let s1: String = "hello".to_string();
    let s2: String = format!("{} world", s1);
    println!("{}", s2);

    let s1: String = "hello".to_string();
    let s2: String = format!("{} world", s1);
    println!("{}", s2);

    let s1: String = "hello".to_string();
    let s2: String = format!("{}, {} and {}", s1, "world", "mom");
    println!("{}", s2);

    let s1: String = "hello".to_string();
    let s2: String = format!("{}, {} and {}", s1, "world", "mom");
    println!("{}", s2);
}
