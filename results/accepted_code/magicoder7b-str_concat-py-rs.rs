fn main() {
    let mut s1 = String::from("hello");
    println!("{} world", s1);

    let s2 = format!("{}, world", s1.clone());
    println!("{}", s2);

    let s3: Vec<String> = vec![s1, "world".to_string(), "mom".to_string()];
    let s4: String = s3.join(", ");
    println!("{}", s4);
}
