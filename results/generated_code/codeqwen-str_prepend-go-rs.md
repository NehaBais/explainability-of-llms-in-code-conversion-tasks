In Rust, you can perform string concatenation using the "+" operator or the format! macro. Here are both ways to solve this problem:

Using "+" operator:
```rust
fn main() {
    let mut s = String::from("world!");
    s = "Hello, ".to_string() + &s;
    println!("{}", s);  // Output: Hello, world!
}
```

Using format macro:

fn main() {
    let mut s = String::from("world!");
    s = format!("Hello, {}", s);
    println!("{}", s);  // Output: Hello, world!
}
