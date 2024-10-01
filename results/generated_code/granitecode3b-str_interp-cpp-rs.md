Sure, here's the code in Rust:
```rust
fn main() {
 let original = "Mary had a X lamb.";
 let to_be_replaced = "X";
 let replacement = "little";
 let new_string = original.replace(&toBeReplaced, &replacement);
 println!("String after replacement: {}", new_string);
}
```
This code uses the `replace` method on strings to replace the defined character sequence in the original string with a value or variable values. The `find` method is used to determine the starting index of the character sequence to be replaced, and the `length` method is used to determine the length of the character sequence to be replaced.

