In Rust you can use the format! macro to concatenate a string value with another one:

```rust
fn main() {
    let mut s= String::from(", World");
    s.insert_str(0, "Hello"); 
    println!("{}", s);
}
```
