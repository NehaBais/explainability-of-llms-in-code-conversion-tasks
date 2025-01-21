fn main() {
    let mut s = "world!".to_string(); // Convert string literal into a String variable
    let hello = "Hello, ".to_string(); // Another String variable for the prefix string
    s.prepend(&hello); // Prepending `s` with the content of `"Hello,  "`
}
