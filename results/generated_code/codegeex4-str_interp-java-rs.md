In Rust, you can use the `format!` macro to achieve what you're looking for. Here's your Java code converted into equivalent Rust:

```rust
fn main() {
    let adjective: &str = "little";
    let lyric: String = format!("Mary had a {} lamb", adjective);
    
    println!("{}", lyric);
}
```

In this example, the `{}` is a placeholder that will be replaced by the value of the variable following the comma.
