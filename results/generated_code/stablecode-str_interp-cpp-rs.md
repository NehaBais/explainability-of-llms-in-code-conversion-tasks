In Rust, string interpolation can be achieved using the `format!` macro. Here's how you could translate the provided C++ code to Rust:

```rust
fn main() {
    let original = "Mary had a X lamb.";
    let to_be_replaced = "X";
    let replacement = "little";

    // Using format! for string interpolation
    let new_string = format!(
        "{} {} {}",
        original.replace(original.find(to_be_replaced)),
        toBeReplaced.len(),
        replacement
    );

    println!("String after replacement: {}", new_string);
}
```

This Rust code performs the same string interpolation and character sequence replacing as the given C++ code.
