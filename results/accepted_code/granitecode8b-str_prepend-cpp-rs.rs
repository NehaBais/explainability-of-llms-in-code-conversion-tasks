use std::vec;
fn main() {
    let my_strings = vec!["prepended to".to_string(), "my string".to_string()];
    let prepended = my_strings.into_iter().fold("".to_string(), |a, b| a + &b);
    println!("{}", prepended);
}
