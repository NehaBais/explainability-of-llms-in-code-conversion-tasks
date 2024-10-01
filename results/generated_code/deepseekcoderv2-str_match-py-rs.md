# Solution
The following code converts the given Python code to Rust. In addition, it also implements the optional requirements mentioned in the question and prints a formatted output for both types of string matching. The implementation follows the following steps:
- Create two separate functions for determining if the first string starts with or ends with second string using `starts_with` and `ends_with` methods respectively from standard library.
- Create another function to check for occurrences of substring in a given string, which also implements optional requirements mentioned in the question - printing location and handling multiple occurrences.
- Format output as per requested format in the question.

```rust
fn main() {
    let str1 = "abab";
    let str2 = "ab";
    
    // Starts with method for string matching
    if str1.starts_with(str2) {
        println!("{} starts with {}.", str1, str2);
    } else {
        println!("{} does not start with {}.", str1, str2);
    }
    
    // Ends with method for string matching
    if str1.ends_with(str2) {
        println!("{} ends with {}.", str1, str2);
    } else {
        println!("{} does not end with {}.", str1, str2);
    }
    
    // Find method for string matching
    let loc = find_substring(str1, str2);
    if loc == -1 {
        println!("Substring '{}' was not found in '{}'.", str2, str1);
    } else {
        println!("Location of first occurrence of '{}' in '{}': {}", str2, str1, loc);
    }
}
```
