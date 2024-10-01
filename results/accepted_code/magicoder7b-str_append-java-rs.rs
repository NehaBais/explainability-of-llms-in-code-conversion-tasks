fn main() {
    let mut string = String::from("abc");
    println!("{}", string); // print original string

    string.push_str("def"); // append string literal to the end of the variable

    println!("{}", string); // print updated string
}
