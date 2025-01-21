fn main() {
    let s1 = String::from("hello");
    println!("{} world", s1);

    let mut s2 = s1.clone();
    s2.push_str(" world");
    println!("{}", s2);

    let s1 = String::from("hello");
    let parts = vec![s1, "world".to_string(), "mom".to_string()];
    let s2: String = parts.join(", ");
    println!("{}", s2);
}