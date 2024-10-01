fn main() {
    let mut my_strings = vec!["prepended to", "my string"];
    my_strings.reverse();
    let prepended: String = my_strings.into_iter().collect::<String>();
    println!("{}", prepended);
}
