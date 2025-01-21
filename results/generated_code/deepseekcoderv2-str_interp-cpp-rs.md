 Certainly! Below is the Rust equivalent of the provided C++ code, which performs string interpolation to replace a placeholder with a specified value.

```rust
fn main() {
    let original = String::from("Mary had a X lamb.");
    let to_be_replaced = "X";
    let replacement = "little";

    // Find the index of `toBeReplaced` in `original`
    if let Some(index) = original.find(to_be_replaced) {
        // Replace the substring from the found index with the replacement string
        let new_string = original.replace(&original[index..index + to_be_replaced.len()], replacement);
        println!("String after replacement: {}", new_string);
    } else {
        println!("Substring not found in the original string.");
    }
}
```

This Rust code performs a similar operation to the C++ code you provided: it finds the substring `"X"` in the original string and replaces it with `"little"`. The `replace` method is used to perform the substitution, ensuring that only the specified portion of the string is replaced.
