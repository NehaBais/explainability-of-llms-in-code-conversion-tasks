Here is the equivalent Rust code:

```rust
fn main() {
    let s = String::from("hello");
    println!("{} literal", s);

    let s2 = format!("{}{}", s, " literal"));
    println!("{}", s2));
}
```
This Rust code does the same thing as your C++ code: it creates a string variable `s` with a value of "hello"; it then prints out both `s` and the string "literal" concatenated to `s`. The second print statement uses Rust's format! macro to create the new string.
