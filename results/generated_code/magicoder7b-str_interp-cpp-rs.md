 In Rust, you can use the `replace` method to replace all occurrences of a substring in a string. Here's the equivalent code:

```rust
fn main() {
    let original = String::from("Mary had a X lamb.");
    let to_be_replaced = String::from("X");
    let replacement = String::from("little");
    
    let new_string = original.replace(&to_be_replaced, &replacement);
    
    println!("String after replacement: {}", new_string);
}
```

This code does the same thing as your C++ example – it creates a string with "Mary had a X lamb.", then replaces all occurrences of "X" in that string with "little". It prints out the resulting string.
