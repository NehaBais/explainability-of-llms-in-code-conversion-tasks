Here is the equivalent code in Rust:

```rust
fn main() {
    let s1: &str = "abcd";
    let s2: &str = "ab";
    let s3: &str = "zbn";
    let s4: &str = "abab";
    let s5: &str = "bb";
    let s6: &str = "ab";
    let s7: &str = "abab";
    
    println!("{}", s1.starts_with(s2)); // true
    println!("{}", s3.ends_with(s2)); // false
    println!("{}", s4.contains(s5)); // false
    println!("{}", s6.contains(s7)); // true
    let loc: i32 = "abab".find(s7).unwrap_or(-1); // 2
    let loc = "abab".find(s6).unwrap() + 1; // 0
}
```
This code first defines a number of string literals, then it tests the methods provided by `String` for each given string literal. The first two test whether the string starts and ends with the second string respectively. The third one checks if the first string contains the second string anywhere in it. The last three lines show how to use the `find` method of a string which returns an option containing the index of the beginning of the match or None if no match is found, then adjusts this index by one (`loc + 1`) and finally prints out the adjusted index. If there was no match, it prints -1.
