Sure, here is the equivalent code in Rust:

```rust
fn main() {
    let string = String::from("abc");
    println!("{}", &string);
    string.push_str("def");
    println!("{}", &string);
}
```
This Rust program does exactly the same as your Java program: it creates a string variable, prints its initial value, appends another string literal to it and then prints the updated value of the string. The `push_str()` function is used instead of `+=` operator in Java to append strings in Rust.
