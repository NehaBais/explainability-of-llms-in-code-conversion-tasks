 Here is the Rust version of your Python code:

```rust
fn main() {
    // Part 1: demonstrating string starts with another
    let str1 = "abcd";
    let str2 = "ab";
    
    if str1.starts_with(str2) {
        println!("True");
    } else {
        println!("False");
    }

    // Part 2: demonstrating string contains another
    let str3 = "bb";
    let str4 = "abab";
    
    if str4.contains(str3) {
        println!("True");
    } else {
        println!("False");
    }

    // Part 3: demonstrating string ends with another
    let str5 = "cd";
    let str6 = "abcd";
    
    if str6.ends_with(str5) {
        println!("True");
    } else {
        println!("False");
    }
}
```
The Rust `starts_with()`, `contains()`, and `ends_with()` methods work similarly to their Python counterparts.
