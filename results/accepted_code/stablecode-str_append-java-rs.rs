fn main() {
    let mut string = "abc".to_owned();
    println!("{}", string);
    string.push_str("def");
    println!("{}", string);
}
