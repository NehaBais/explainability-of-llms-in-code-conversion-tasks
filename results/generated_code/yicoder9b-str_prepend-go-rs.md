In Rust, you can accomplish this task using the following code:
```rust
fn main() {
    let mut s = String::from("world!");
    s.insert_str(0, "Hello, ");
    println!("{}", s);
}
```
