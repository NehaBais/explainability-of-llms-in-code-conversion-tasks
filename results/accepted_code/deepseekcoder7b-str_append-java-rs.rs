fn main() {
    let mut string = String::from("abc");
    println!("{}", string); // prints "abc"

    string.push_str("def");
    println!("{}", string); // prints "abcdef"
}
