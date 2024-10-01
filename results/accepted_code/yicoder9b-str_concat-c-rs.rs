fn main() {
    let s1 = String::from("hello");
    let s2 = format!("{} world", s1.clone());

    println!("Original string: {}", s1);
    println!("Concatenated string: {}", s2);
}
