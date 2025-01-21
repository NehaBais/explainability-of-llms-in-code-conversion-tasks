fn main() {
    let mut s1: String = String::from("hello");
    println!("{}", s1.clone() + " world");

    let s2: String = format!("{} world", s1);
    println!("{}", s2);

    s1 = String::from("hello");
    println!("{}", s1.clone() + ", " + &"world" + ", " + &"mom");

    let s2: String = format!("{}, {}, {}", s1, "world", "mom");
    println!("{}", s2)
}
