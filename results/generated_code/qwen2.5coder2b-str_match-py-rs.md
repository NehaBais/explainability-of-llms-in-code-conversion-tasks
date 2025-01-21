In Rust, the `str` type does not have a direct equivalent for Python's string methods such as `startswith`, `endswith`, and `find`. However, we can use the `chars()` method to achieve similar functionality. Here is how you can convert the given Python code into Rust:

```rust
fn main() {
    let s1 = "abcd";
    let s2 = "ab";

    // Determining if the first string starts with second string
    println!("Starts with: {}", s1.starts_with(s2)); // returns true

    // Determining if the first string contains the second string at any location
    println!("Contains: {}", s1.contains(s2)); // returns false

    // Determining if the first string ends with the second string
    println!("Ends with: {}", s1.ends_with(s2)); // returns false

    // Optional requirements:
    // 1. Print the location of the match for part 2
    // 2. Handle multiple occurrences of a string for part 2.

    // Part 2: Find all locations of substring in the main string.
    let mut loc = -1;
    while let Some(index) = s1.find(s2) {
        if index != loc {
            println!("Match found at index: {}", index);
        }
        loc = index + s2.len();
    }

    // Part 3: Find all locations of substring starting from the given location.
    loc = 0;
    while let Some(index) = s1.find(s2, loc) {
        if index != loc {
            println!("Match found at index: {}", index);
        }
        loc += s2.len();
    }
}
```

### Explanation:
1. **Starting with `str.starts_with`**: This method checks if the string starts with the given substring and returns a boolean.
2. **Containing `str.contains`**: This method checks if the string contains the given substring and returns a boolean.
3. **Ending with `str.ends_with`**: This method checks if the string ends with the given substring and returns a boolean.

4. **Finding all locations of `str.find`**:
   - The `find` method is used to find the first occurrence of the substring starting from 0.
   - It continues to search for the substring by passing the index found last (`loc + s2.len()`) as the second argument until no more matches are found.

Note: The examples provided in the question do not demonstrate part 3, but you can easily add it by changing the starting point of `find` to the current location after a match is found.
