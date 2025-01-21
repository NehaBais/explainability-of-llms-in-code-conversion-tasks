 Certainly! Below is the equivalent code in Rust that performs string interpolation similar to the JavaScript example you provided:

```rust
fn main() {
    let original = String::from("Mary had a X lamb");
    let little = String::from("little");
    
    // Perform replacement
    let replaced = original.replace("X", &little);
    
    println!("{}", replaced); // Output: Mary had a little lamb
}
```

In this Rust code:
- `String::from` is used to create string literals.
- The `replace` method is called on the original string, with the substring "X" being replaced by the content of `little`.
- The result is stored in the variable `replaced`, which then prints out the interpolated string.
