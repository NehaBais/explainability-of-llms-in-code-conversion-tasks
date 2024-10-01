use std::vector;
use std::string;

fn main() {
    let mut my_strings = vector::<string>{"prepended to", "my string"};
    let prepended = my_strings.iter().fold(String::from(""), |a, b| a + b);
    println!("{}", prepended);
    return 0;
}