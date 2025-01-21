fn main() {
    let string = "Hello, world!";

    for (i, c) in string.chars().enumerate() {
        println!("{}: {}", i, c);
    }
}
