In Rust, we can use the `push_str` method for appending strings. Here is how you can convert this JavaScript code to Rust.

```rust
fn main() {
    let mut s1 = String::from("Hello");
    s1.push_str(", World!");
    println!("{}", s1);
}
```
In this code, we first create a mutable string `s1` using `String::from`. We then append the string literal `" ,World!"` to it using the `push_str` method. Finally, we print out the contents of `s1` using `println!`.

The `mut` keyword is used before the variable name to make it mutable, which means its value can be changed after being initialized.
