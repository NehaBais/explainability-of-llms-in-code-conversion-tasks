In Rust, you can use the `format!` macro to convert a string into a variable and then use the `push_str` method to add another string literal. Here is how you could achieve this:

```rust
fn main() {
    let mut s = String::from(", World");
    s.insert_str(0, "Hello");
    println!("{}", s);
}
```

In this code, `insert_str` is used to insert a string into the given position in the string. We are inserting our string literal at the beginning of the string which is represented by index 0.
