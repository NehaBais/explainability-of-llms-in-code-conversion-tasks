In Rust, you can use the `starts_with` method for determining if a string starts with another string, and the `contains` method to check whether it contains a substring anywhere, both of which are equivalent to the C++ `compare` method. The `ends_with` method is also available in Rust.

Here's how you can use these methods:
```rust
fn main() {
    let s1 = "abcd";
    let s2 = "abab";
    let s3 = "ab";
    
    // Determining if the first string starts with second string
    assert!(s1.starts_with(s3));

    // Determining if the first string ends with the second string
    assert!(s1.ends_with(s3));
    
    // Determining if the first string contains the second string at any location 
    let default_pos: usize = 0;
    s2.chars().enumerate()
        .filter(|&(_, &c)| c == 'a')
        .map(|(&pos, _)| pos + default_pos)
        .for_each(|pos| println!("Found at position: {}", pos));
}
```
This Rust code accomplishes the same tasks as your C++ code does. For part 2 of the string matching (locating occurrences), we've assumed that you want to know where in `s1`, if anywhere, 'a' appears. This could be adjusted according to your requirements for multiple occurrences or different characters to find within the string.

