```rust
fn main() {
    let mut str = String::from("my String");
    let cstr = "Changed ";

    str = format!("{}{}", cstr, str);

    println!("{}", str);
}
```
