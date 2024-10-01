fn main() {
    let mut s = String::from("hello");
    println!("{} literal", &s);
    let mut s2 = format!("{} literal", &mut s);
    println!("{}", &s2);
}
