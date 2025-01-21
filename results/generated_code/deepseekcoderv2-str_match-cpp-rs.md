 Sure! Below is the Rust equivalent of the provided C++ code for performing string matching as described:

```rust
fn main() {
    let s1 = "abcd";
    let s2 = "abab";
    let s3 = "ab";

    // Beginning
    if s1.starts_with(s3) {
        println!("String starts with the second string.");
    } else {
        println!("String does not start with the second string.");
    }

    // End
    let len = s1.len();
    if s1.ends_with(s3) {
        println!("String ends with the second string.");
    } else {
        println!("String does not end with the second string.");
    }

    // Anywhere
    let mut loc = s2.find(s3);
    while let Some(pos) = loc {
        println!("Found at position: {}", pos);
        loc = s2[pos + 1..].find(s3);
    }
}
```

### Explanation:
1. **Beginning**: The `starts_with` method is used to check if the first string starts with the second string.
2. **End**: The `ends_with` method is used to check if the first string ends with the second string.
3. **Anywhere**: The `find` method is used to find the first occurrence of the second string within the first string. If multiple occurrences are needed, a loop is used to find subsequent positions using slicing and recursive calls.

### Optional Requirements:
1. For part 2, if you want to print the location of the match, it is done in a loop where each position found is printed.
2. Multiple occurrences are handled by continuing to search from the end of the last found position.
