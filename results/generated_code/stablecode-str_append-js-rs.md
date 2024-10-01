Here is the equivalent Rust code:

```rust
fn main() {
    let mut s1 = "Hello".to_string();
    s1.push_str(", World!");");
    println!("{}", s1);
}
```
Note that in Rust, you can't directly concatenate strings like you could in JavaScript with the "+=" operator. Instead, Rust provides several methods for string manipulation including `format!`, `concat!`, `format_args!`, and others. The best approach will depend on your specific use case and personal preference. For this particular problem, using `push_str` method is a good choice as it directly appends the contents of another string literal to the existing string variable.
Also note that in Rust we need to explicitly declare the type of our variables, which is not necessary in JavaScript due to dynamic typing.
