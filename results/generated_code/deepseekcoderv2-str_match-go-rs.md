 Sure! Below is the Rust equivalent of the provided Go code that performs the three types of string matching as described:

```rust
fn match_strings(first: &str, second: &str) {
    println!(
        "1. {} starts with {}: {}",
        first, second, first.starts_with(second)
    );

    if let Some(index) = first.find(second) {
        println!("2. {} contains {}: true", first, second);
        println!("2.1. at location {}", index);
        
        // Handle multiple occurrences
        let mut start = index + 1;
        while let Some(next_index) = first[start..].find(second) {
            println!("2.2. at location {}", start + next_index);
            start += next_index + 1;
        }
        println!("2.2. and that's all");
    } else {
        println!("2. {} contains {}: false", first, second);
    }

    println!(
        "3. {} ends with {}: {}",
        first, second, first.ends_with(second)
    );
}

fn main() {
    match_strings("abracadabra", "abr");
}
```

### Explanation:
1. **String Prefix Matching**: Rust's `starts_with` method is used to check if the first string starts with the second string.
2. **String Contains Matching**: Rust's `find` method is used to locate the substring within the string. If found, it returns an `Option<usize>` indicating the starting index of the match. The presence and location are then printed based on this result.
3. **String Suffix Matching**: Rust's `ends_with` method is used to check if the first string ends with the second string.
4. For multiple occurrences in part 2, a loop is used within the `find` method to continue searching from the end of the last found position until no more matches are found.

This Rust code should perform similarly to the provided Go code and meet the requirements specified.
