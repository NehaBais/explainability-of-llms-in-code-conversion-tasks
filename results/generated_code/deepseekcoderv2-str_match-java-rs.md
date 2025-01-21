 Sure, here is the equivalent Rust code for the given Java examples:

```rust
fn main() {
    let s1 = "abcd";
    let s2 = "ab";
    let s3 = "zn";
    let s4 = "bb";
    let s5 = "ab";
    
    // 1. Determining if the first string starts with the second string
    println!("{}", s1.starts_with(s2)); // returns true
    
    // 2. Determining if the first string contains the second string at any location
    let loc = find_substring(&s4, "abab");
    println!("{}", loc); // returns -1
    
    let loc = find_substring(&s5, "abab");
    println!("{}", loc); // returns 0
    
    let mut loc = find_substring(&s5, "abab");
    if loc != -1 {
        loc = find_substring_from(&s5, &s5[loc+2..], s4);
    }
    println!("{}", loc); // returns 2
    
    // 3. Determining if the first string ends with the second string
    println!("{}", s1.ends_with(s3)); // returns false
}

fn find_substring(haystack: &str, needle: &str) -> isize {
    let len = haystack.len();
    for i in 0..len {
        if &haystack[i..i+needle.len()] == needle {
            return i as isize;
        }
    }
    -1
}

fn find_substring_from(haystack: &str, from: &str, needle: &str) -> isize {
    let len = from.len();
    for i in 0..len {
        if &from[i..i+needle.len()] == needle {
            return (i + haystack.find(from).unwrap()) as isize;
        }
    }
    -1
}
```

### Explanation:
1. **String StartsWith**: The `starts_with` method in Rust checks if a string starts with a given substring and returns a boolean value.
2. **String Contains**: In Rust, you can use the `contains` method to check if a string contains another string. This will return a boolean value. For finding multiple occurrences, you can iterate over the string and check for substrings manually.
3. **String EndsWith**: The `ends_with` method in Rust checks if a string ends with a given substring and returns a boolean value.
4. **Finding Substring Location**: To find the location of a substring, we implemented two functions:
   - `find_substring` for finding the first occurrence.
   - `find_substring_from` for finding subsequent occurrences starting from a specified position.

This Rust code should provide similar functionality to the given Java examples.
