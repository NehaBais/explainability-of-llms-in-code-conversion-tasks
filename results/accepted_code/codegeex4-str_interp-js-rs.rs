fn main() {
    let mut original = "Mary had a X lamb".to_string();
    let little: &str = "little";

    // Replace 'X' with 'little'
    original = original.replace("X", little);

    println!("{}", original); // prints "Mary had a little lamb"
}
