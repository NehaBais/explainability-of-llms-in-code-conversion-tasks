### Solution

```rust
fn main() {
    let s1 = "abcd";
    let s2 = "abab";
    let s3 = "ab";

    // Beginning
    if s1.starts_with(s3) {
        println!("The first string starts with the second string.");
    } else {
        println!("The first string does not start with the second string.");
    }

    // End
    let len = s1.len();
    if s1[len - s3.len()..] == s3 {
        println!("The first string ends with the second string.");
    } else {
        println!("The first string does not end with the second string.");
    }

    // Anywhere
    let mut loc = s2.find(s3);
    while loc != std::string::String::npos {
        println!("Match found at location: {}", loc);
        loc = s2.find(s3, loc + 1);
    }
}
```
### Explanation
1. The code starts by defining three string variables `s1`, `s2`, and `s3`.
2. It then checks if the first string (`s1`) starts with the second string (`s3`). This is done using the `starts_with()` function from the Rust standard library. If it does, it prints a message indicating that `s1` starts with `s3`. Otherwise, it prints an error message.
3. It then checks if the first string ends with the second string by getting the length of `s1`, subtracting the length of `s3` from it, and comparing this substring to `s3`. If they are equal, it prints a message indicating that `s1` ends with `s3`. Otherwise, it prints an error message.
4. Finally, it looks for occurrences of `s3` in `s2` using the `find()` function from the Rust standard library. It iterates over all occurrences and prints their locations.
