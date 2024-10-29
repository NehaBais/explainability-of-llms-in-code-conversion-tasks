fn main() {
    let mut s1 = String::from("hello");
    println!("{} world", s1);

    s1.push_str(" world");
    println!("{}", s1);

    let s2 = format!("{}, {} and {}", s1, "world", "mom");
    println!("{}", s2);
}
