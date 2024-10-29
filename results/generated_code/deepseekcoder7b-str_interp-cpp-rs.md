The equivalent Rust code would be as follows:

```rust
fn main() {
    let original = String::from("Mary had a X lamb.");
    let to_be_replaced = "X";
    let replacement = "big";
    
    // replace method is only available for Strings, so we need to convert our original string back into its &str form. 
    let new_string = original.replace(&to_be_replaced, replacement);

    println!("String after replacement: {}", new_string);
}
```

In this Rust code, the `replace` method is used to replace all instances of the string "X" with the string "big". The `&to_be_replaced` parameter represents a reference to our C++ string literal (implicitly converted to a &str for the String.replace function in Rust), while the `{}` in println! macro are format specifiers that get replaced by the value of new_string.

