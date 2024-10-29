In Rust, you can use `push_str` method to add a string literal to an existing String variable. Here is the idiomatic way of doing it -

```rust
fn main() {
    let mut s1 = String::from("Hello");
    s1.push_str(", World!");
    println!("{}", s1);
}
```
This code will output: 
`Hello, World!`

