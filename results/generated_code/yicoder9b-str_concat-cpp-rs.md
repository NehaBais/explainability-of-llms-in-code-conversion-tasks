In Rust, you can create and manipulate strings in a similar way to C++. Here is the equivalent code written in Rust:

```rust
fn main() {
    let s = String::from("hello");
    println!("{} literal", s);
    let s2 = format!("{}{}", &s, " literal");
    println!("{}", s2);
}
```
