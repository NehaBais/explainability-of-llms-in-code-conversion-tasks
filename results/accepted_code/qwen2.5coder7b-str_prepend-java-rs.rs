fn main() {
    let mut string = String::from("def");
    string = "abc".to_string() + &string;
}