fn main() {
    let my_strings = vec!["prepended to", "my string"];
    let prepended = my_strings.iter().fold(String::new(), |a, b| a + b);
    println!("{}", prepended);
}
