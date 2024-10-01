In Rust, the comparison of strings is quite similar to that in JavaScript. However, Rust also provides type-safe operations on both numeric and non-numeric strings. Here's how you can perform the requested comparisons:

```rust
fn main() {
    // Comparing two strings for exact equality
    assert_eq!("abcd", "abcd"); // true
    assert_ne!("abcd", "dcba"); // true
    
    // Lexical comparison and case sensitivity
    let s1 = "abcd";
    let s2 = "ABCD";
    assert!(s1.to_lowercase() == s2.to_lowercase()); // true (case insensitive)
    assert!(s1 < s2); // false (lexical comparison based on ASCII values)

    // Numeric strings are not automatically treated lexically
    assert_eq!("123", 123); // fails to compile because of mismatched types
}
```

Rust's equality and inequality operators (`==`, `!=`) work directly with string content, comparing the exact characters in each string. The `to_lowercase()` function is used for case-insensitive comparison. 

In Rust, numeric strings are not automatically converted to integers when using comparison operators; instead, you would need to parse the string first. However, this does not apply when comparing with integer literals because they have static types in Rust.
