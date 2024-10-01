fn main() {
    let mut MyStrings = vec!["prepended to", "my string"];
    let prepended = MyStrings.concat();
    println!("{}", prepended);
}
