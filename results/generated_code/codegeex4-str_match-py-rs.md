In Rust, the equivalent functionality can be achieved using the `starts_with` and `ends_with` methods for determining if a string starts with or ends with another string, respectively. For checking if a string contains another string at any location, you can use the `contains` method.

Here's how the Python code is converted to Rust:

```rust
fn main() {
    let first_str = "abcd";
    let second_str = "ab";
    println!("{}", first_str.starts_with(second_str)); // true

    let first_str = "abcd";
    let second_str = "zn";
    println!("{}", first_str.ends_with(second_str)); // false

    let first_str = "abab";
    let second_str = "bb";
    println!("{}", first_str.contains(second_str)); // false

    let first_str = "abab";
    let second_str = "ab";
    println!("{}", first_str.contains(second_str)); // true

    // find method to locate the location of a match
    let first_str = "abab";
    let second_str = "bb";
    let mut loc: Option<usize> = None;
    for (i, sub_str) in first_str.split(second_str).enumerate() {
        if i > 0 {
            println!("{}", first_str.find(sub_str).unwrap());
            loc = Some(first_str.find(sub_str).unwrap());
        }
    }

    // For multiple occurrences of a string:
    let first_str = "abab";
    let second_str = "ab";
    let mut loc: Option<usize> = None;
    for (i, sub_str) in first_str.split(second_str).enumerate() {
        if i > 0 {
            println!("{}", first_str.find(sub_str).unwrap());
            loc = Some(first_str.find(sub_str).unwrap());
        }
    }
}
```

Please note that Rust does not have a built-in method similar to Python's `str.find()` for finding the location of a substring. Therefore, we loop through each possible position in the string and print out the index at which the match is found.
 
