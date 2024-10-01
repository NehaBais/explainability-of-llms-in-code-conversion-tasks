```rust
fn main() {
    let s = String::from("hello");
    println!("{} literal", s);

    let s2 = format!("{}{}", s, " literal");
    println!("{}", s2);
}
```
