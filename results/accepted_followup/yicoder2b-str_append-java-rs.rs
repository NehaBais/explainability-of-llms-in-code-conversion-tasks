fn main() {
    let mut string = String::from("abc");
    println!("{}", &string);
    string.push_str("def");
    println!("{}", &string);
}