fn main() {
    let s1 = String::from("hello");
    println!("{}", s1 + " world");

    let s2 = s1.clone() + " world";
    println!("{}", s2);

    let s3 = vec![s1, String::from("world"), String::from("mom")].join(", ");
    println!("{}", s3);

    let s4 = vec![s1.clone(), String::from("world"), String::from("mom")].join(", ");
    println!("{}", s4);
}
