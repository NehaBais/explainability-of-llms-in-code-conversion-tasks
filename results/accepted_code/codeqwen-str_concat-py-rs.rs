fn main() {
    let s1 = String::from("hello");
    println!("{} world", s1);

    let mut s2 = s1.clone();
    s2.push_str(" world");
    println!("{}", s2);

    let s3: Vec<&str> = vec![&s1, "world", "mom"];
    let s4 = s3.join(", ");
    println!("{}", s4);
}
