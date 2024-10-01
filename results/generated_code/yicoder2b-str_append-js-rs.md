Sure, here is how you can write this code in Rust:
```rust
fn main() {
    let mut s1: String = String::from("Hello");
    s1.push_str(", World!");
    println!("{}", s1);
}
```
This code does exactly the same thing as your original JavaScript code. It creates a string variable `s1` and appends another string literal to it using the `push_str()` method, which is an idiomatic way in Rust to append strings. The final contents of `s1` are then printed out with `println!()`.
