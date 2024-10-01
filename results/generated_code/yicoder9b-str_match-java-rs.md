In Rust there is no direct equivalent to Java's `startsWith()`, `endsWith()` and `contains()` methods for strings so we have to use the `starts_with()`, `ends_with()` and `find()` functions respectively. Here is your code converted from Java to Rust:
```rust
fn main() {
    let s1 = "abcd";
    let s2 = "ab";
  
    // Determine if first string starts with second string
    println!("Does {} start with {}? {}", s1, s2, s1.starts_with(s2)); 
  
    // Determine if the first string contains the second string at any location
    if let Some((_, found)) = s1.find(s2) {
        println!("{} does contain {} and starts at position {}", s1, s2, found);
    } else { 
        println!("{} does not contain {}", s1, s2);
    };
  
    // Determine if the first string ends with the second string.
    let e1 = "abcd";
    let e2 = "cd";
    println!("Does {} end with {}? {}", e1, e2, e1.ends_with(e2)); 
}
```
Rust's `find()` function can be used to find the location of a substring within a string. It returns an option that contains both the position and found substring. If it does not find the substring in the string, then it will return None. 
To get multiple occurrences we would need to create custom logic around `find()` function.
