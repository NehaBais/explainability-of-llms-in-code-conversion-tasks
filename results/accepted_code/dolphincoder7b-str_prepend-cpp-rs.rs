use std::collections::VecDeque;
use std::iter::FromIterator;
fn main() {
    let my_strings = VecDeque::from(["prepended to", "my string"]);
    let prepended: String = my_strings
        .into_iter()
        .fold(String::new(), |acc, x| acc + &x);
    println!("{}", prepended);
}
