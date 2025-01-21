use std::io;

fn main() {
    let string = "hello world";
    let word = "world";

    if string.contains(word) {
        println!("{} contains {}", string, word);
    } else {
        println!("{} does not contain {}", string, word);
    }
}
