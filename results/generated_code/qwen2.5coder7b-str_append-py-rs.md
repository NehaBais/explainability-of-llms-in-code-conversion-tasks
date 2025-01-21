Here is the equivalent code in Rust:

```rust
fn main() {
    let mut str = String::from("12345678");
    str.push_str("9!");
    println!("{}", str);
}
```

In this code, we declare a mutable `String` variable and use the `push_str` method to append another string literal. Finally, we print out the value of the variable after the append operation.
