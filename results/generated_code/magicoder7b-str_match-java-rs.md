 Here is the Rust version of your Java code:

```rust
fn main() {
    println!("{}", "abcd".starts_with("ab")); // returns true
    println!("{}", "abcd".ends_with("cd")); // returns false
    println!("{}", "abab".contains("ab")); // returns true
    println!("{}", "abab".contains("bb")); // returns false
    let loc = "abab".find("ab"); 
    match loc {
        Some(index) => println!("{}", index),
        None => println!("No Match"),
    }
    let loc2 = "abab".find("ab", loc.unwrap_or(0)+1); 
    match loc2 {
        Some(index) => println!("{}", index),
        None => println!("No Match"),
    }
}
```
Note: 
The Rust version of contains does not support multiple occurrences, so I used the find function instead. Also, Rust strings are utf-8 encoded, thus the method for checking if one string ends with another does not work as you might expect in some languages.
