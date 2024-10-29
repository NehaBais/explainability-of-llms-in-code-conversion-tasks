fn main() {
    let mut greeting = String::from("Hello"); // create a new string variable
    greeting.push_str(", world!"); // append the string to another string literal
    println!("{}", greeting); // show the contents of the variable after the append operation
}
