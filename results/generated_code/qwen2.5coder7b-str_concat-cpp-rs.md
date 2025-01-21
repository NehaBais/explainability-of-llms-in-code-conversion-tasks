Here is how you can convert the given C++ code to Rust:

```rust
fn main() {
    let s = String::from("hello");
    println!("{} literal", s);
    let s2 = format!("{} literal", s);
    println!("{}", s2);
}
```
In this Rust program, we first create a `String` variable `s` and initialize it with the value "hello". We then print the value of `s` concatenated with the string literal " literal" using `println!()`. Then, we use the `format!()` macro to concatenate `s` with " literal", and store the result in another `String` variable `s2`. Finally, we print the content of `s2` using `println!()`.
