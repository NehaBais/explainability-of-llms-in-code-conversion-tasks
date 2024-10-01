fn main() {
    let mut string = "def".to_string();
    string = format!("abc{}", &string);
    println!("{}", &string); // abcdef
}
