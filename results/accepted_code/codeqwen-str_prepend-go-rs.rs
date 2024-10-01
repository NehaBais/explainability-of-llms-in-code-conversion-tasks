fn main() {
    let mut s = String::from("world!");
    s = "Hello, ".to_string() + &s;
    println!("{}", s); // Output: Hello, world!
}
