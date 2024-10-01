Sure, here is how you can convert this Python code to Rust:

```rust
fn main() {
    let s = "abcdefgh".to_string();
    let n = 2;
    let m = 3;
    let char_ = 'd';
    let chars = "cd";

    // The equivalent Rust slices are obtained by indexing the string with a range [n-1, n+m-1].
    println!("{:?}", &s[n - 1..n + m - 1]);
    // The whole string minus the last character is obtained by slicing [0:-1].
    println!("{:?}", &s[0..s.len()-1]);
    // Slice from known character.
    let index = s.chars().position(|&c| c == char_).unwrap();
    println!("{:?}", &s[index..index + m]);
    // Slice from known substring.
    let index = s.chars().position(|&c| c == *chars.as_bytes()[0]).unwrap();
    println!("{:?}", &s[index..index + m]);
}
```
This Rust code does the same operation as the Python code, but it follows the rules of string indexing in Rust (which are similar to Python's) and the `position` function which is used to find a character in the string. This also works with UTF-8 or UTF-16 because strings are represented internally in UTF-32 or another encoding that can handle all Unicode characters.
