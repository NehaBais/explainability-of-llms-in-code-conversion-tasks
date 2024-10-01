Answer:
```rust
fn main() {
    let str = String::from("Mary had a {} lamb");
    let value = "little";
    let out = format!(&str, &value);
    println!("{}", out);
}
```
