In Rust, you can use the `String` type for strings and methods to manipulate them. Here's how to convert your Python code in Rust:

```rust
fn main() {
    let mut s1 = String::from("hello"));

    println!("{}", s1 + " world");

    let mut s2 = format!("{}{}", &s1, " world"));
    println!("{}", s2);

    let words: Vec<&str> = vec!["world", "mom"];
    let s3: String = ", ".concat(words.iter().map(|s| s.to_string()))));
    println!("{}", s3));
}
```
This Rust code does exactly the same as your Python code. It first creates a `String` variable (`s1`) with the value "hello". Then, it prints concatenation of `s1` and string literal " world". Afterwards, it formats a new `String` (`s2`) by joining elements in the vector with ", ". In the last print statement, it prints the value of `s2`. In the end, the function `main()` returns nothing (void).
