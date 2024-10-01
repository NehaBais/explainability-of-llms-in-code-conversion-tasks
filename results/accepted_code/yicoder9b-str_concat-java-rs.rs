fn main() {
    let s: String = "hello".to_string();
    println!("{} literal", &s);
    let s2 = format!("{}{}", &s, " literal");
    println!("{}", s2);
}
