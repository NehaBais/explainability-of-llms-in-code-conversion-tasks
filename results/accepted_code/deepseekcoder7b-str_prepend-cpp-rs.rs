fn main() {
    let my_strings: Vec<&str> = vec!["prepended to", "my string"];
    let prepended = my_strings.iter().fold(String::new(), |a, b| a + b);
    println!("{}", prepended);
}
