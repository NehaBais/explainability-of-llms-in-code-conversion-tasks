fn main() {
    let mut my_strings = vec!["my string".to_string()];
    my_strings.push("prepended to".to_string());

    let prepended: String = my_strings.iter().fold(String::new(), |a, b| a + &b));
    println!("{}", prepended);
}