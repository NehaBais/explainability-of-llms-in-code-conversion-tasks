fn main() {
    let mut my_strings = vec!["my string".to_string()];
    my_strings.push("prepended to".to_string());

    let prepended: String = my_strings
        .iter()
        .fold(String::new(), |a, b| {
            let a = a; // need to specify that a is local variable (otherwise it gets captured by reference and can lead to potential lifetime issues)
            a + &b
        }));

    println!("{}", prepended);
}