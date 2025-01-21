In Rust, the `std::string` module provides functionalities to work with strings. Here is how you can accomplish the same functionality as C++ in Rust:

```rust
fn main() {
    let s1 = "abcd";
    let s2 = "abab";
    let s3 = "ab";

    // Beginning
    if s1.starts_with(&s3) {
        println!("The first string starts with the second.");
    } else {
        println!("The first string does not start with the second.");
    }

    // End
    if s1.ends_with(&s3) {
        println!("The first string ends with the second.");
    } else {
        println!("The first string does not end with the second.");
    }

    // Anywhere
    if let Some(index) = s1.find(&s3) {
        println!("The first string contains the second at index {}", index);
    } else {
        println!("The second string was not found in the first string");
    }
}
```

Rust uses pattern matching for handling `Option` types. The `starts_with` and `ends_with` methods return a boolean value that indicates whether the given prefix or suffix is contained within the string. The `find` method returns an `Option<usize>` which, if some value is returned, contains the index of the first occurrence of the substring.

The code checks for occurrences multiple times by calling `find` starting from different positions (`loc+1`).
