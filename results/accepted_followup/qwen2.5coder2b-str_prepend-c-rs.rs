fn main() {
    let mut str: String = "my String".to_string();
    str.insert_str(0, "Changed ");
    println!("{}", str);
}
