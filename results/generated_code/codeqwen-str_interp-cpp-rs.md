In Rust, you can use the `replace()` function which replaces all occurrences of a pattern in the string. Here is your code translated into Rust.

```rust
fn main() {
    let original = String::from("Mary had a X lamb.");
    let replacement = "little";
    let new_string = original.replace("X", replacement);
    println!("String after replacement: {}", new_string);
}
```

This Rust program does exactly the same thing as your C++ program. It creates a string, defines a replacement value, and then replaces all occurrences of "X" with the replacement. The modified string is then printed out.
