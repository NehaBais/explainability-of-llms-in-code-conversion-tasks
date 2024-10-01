In Rust, you can use the format! macro for interpolation:

```rust
fn main() {
    let adjective = "big";
    let lyric = format!("Mary had a {} lamb", adjective);
    println!("{}", lyric);  // Outputs: Mary had a big lamb
}
```
This program defines an adjective and uses the format! macro to insert it into the string. The output is then printed to the console.
