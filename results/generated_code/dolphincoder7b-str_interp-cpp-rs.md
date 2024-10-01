```rust
use std::string::String;
fn main() {
    let original = String::from("Mary had a X lamb.");
    let to_be_replaced = String::from("X");
    let replacement = String::from("little");

    let new_string: String = original.replace(to_be_replaced, replacement);

    println!("String after replacement: {}", new_string);
}
```
In Rust, we use the `str` type to represent string slices instead of strings with mutable contents. The `String` struct is used for all string manipulations and operations.
The `replace` method in Rust replaces a substring within a string with another string value. It takes two arguments: the substring to be replaced and the replacement substring. 
In this case, we use `replace` to find the position of the character 'X' in the original string, remove "X", and replace it with the value "little". Finally, we print the modified string using `println!` macro.
