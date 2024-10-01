fn main() {
    let my_strings = ["prepended to", "my string"];
    let prepended = my_strings.iter().fold(String::from(""), |a, b| a + b);
    println!("{}", prepended);
}
