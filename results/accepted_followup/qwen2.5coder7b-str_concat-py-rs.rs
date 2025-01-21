fn main() {
    let s1 = String::from("hello");
    println!("{}", s1 + " world");

    let s2 = format!("{} world", s1);
    println!("{}", s2);

    let s3 = format!("{}, {}, {}", s1, "world", "mom");
    println!("{}", s3);
}
