Here is a direct conversion from JavaScript to Rust:

```rust
fn main() {
    let mut s1 = String::from("Hello");
    s1.push_str(", World!");
    println!("{}", s1);
}
```

In this code snippet, we first create a `String` variable `s1` with the value "Hello". We then append another string to it using the `push_str()` method. Finally, we print out the contents of `s1` after the append operation.
