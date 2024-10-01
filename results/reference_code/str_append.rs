use std::ops::Add;

fn main() {
    let hello = String::from("Hello world");
    println!("{}", hello.add("!!!!"));
}

fn main() {
    let mut hello = String::from("Hello world");
    hello.push_str("!!!!");
    println!("{}", hello);
}
