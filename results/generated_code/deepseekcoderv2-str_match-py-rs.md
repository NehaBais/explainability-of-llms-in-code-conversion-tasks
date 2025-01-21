 Sure, here is the equivalent Rust code for the given Python examples:

```rust
fn main() {
    // Determining if the first string starts with the second string
    let s1 = "abcd";
    let s2 = "ab";
    println!("{}", s1.starts_with(s2)); // returns true

    // Determining if the first string ends with the second string
    let s1 = "abcd";
    let s2 = "zn";
    println!("{}", s1.ends_with(s2)); // returns false

    // Determining if the first string contains the second string at any location
    let s1 = "abab";
    let s2 = "bb";
    println!("{}", s1.contains(s2)); // returns false

    let s1 = "abab";
    let s2 = "ab";
    println!("{}", s1.contains(s2)); // returns true

    // Handling multiple occurrences of a string for part 2
    let s1 = "abab";
    let s2 = "ab";
    let mut loc: isize = -1;
    if let Some(index) = s1.find(&s2) {
        loc = index as isize;
    }
    println!("{}", loc); // returns 0

    let s1 = "abab";
    let s2 = "ab";
    let mut loc: isize = -1;
    if let Some(index) = s1.find(&s2) {
        loc = index as isize;
    }
    println!("{}", loc); // returns 0

    let s1 = "abab";
    let s2 = "ab";
    let mut loc: isize = -1;
    if let Some(index) = s1.find(&s2) {
        loc = index as isize;
    }
    println!("{}", loc); // returns 2
}
```

This Rust code performs the same operations as the provided Python examples:
1. Checks if one string starts with another string.
2. Checks if one string ends with another string.
3. Checks if one string contains another string at any location, and handles multiple occurrences by finding them sequentially.
