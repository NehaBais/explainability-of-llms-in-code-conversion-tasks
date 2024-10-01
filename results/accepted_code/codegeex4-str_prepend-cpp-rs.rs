fn main() {
    let my_strings: Vec<&str> = vec!["prepended to", "my string"];
    let mut prepended: String = "".to_string();
    for s in my_strings.iter() {
        prepended.push_str(s);
    }
    println!("{}", prepended);
}
