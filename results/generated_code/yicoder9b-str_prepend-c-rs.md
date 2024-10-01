In Rust:

```rust
fn main() {
    let mut str = String::from("my String");
    let prepend_str = "Changed ".to_string();
    str.insert_str(0, &prepend_str);
    println!("{}", str);
}
```
