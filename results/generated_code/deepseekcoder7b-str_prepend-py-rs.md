Sure, here is the equivalent Rust code.

Rust string immutability makes things a bit tricky but we can create an owned String and prepend it with another string literal as follows:

```rust
fn main() {
    let mut s = "12345678".to_string();  // Create a variable 's' of type `String`.
    let prefix = "0";                       // String to be prepended
    
    // Prepending the strings: Use push_str() method for concatenation in Rust as it directly appends the string to the existing one, unlike Python where we use + operator for that purpose
    s.push_str(prefix);
    
    println!("{}", &s);                       // Printing out 's' after prepending "0" to it
}
```

Above code directly concatenates two string variables `s` and `prefix` using Rust's built-in method `push_str()`. It does not create a new variable to hold the result, as in Python we have references/pointers that don't need dynamic memory allocation unlike C++ or Java etc..

