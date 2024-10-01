In Rust, you can achieve the same functionality with the following code:

```rust
pub fn substring(s: &str, n: usize, m: usize) -> String {
    let end = if n + m > s.len() {
        s.len()
    } else {
        n + m
    };

    String::from_utf8_lossy(&s.bytes()[n..end].to_vec()))
}

pub fn substring(s: &str, n: usize) -> String {
    substring(s, n, s.len() - n)
}

pub fn substring(s: &str) -> String {
    substring(s, 0)
}

pub fn substring(s: &str, c: char, m: usize) -> String {
    let idx = s.find(c).unwrap();
    substring(&s[idx..], m))
}

pub fn substring(s: &str, sub: &str, m: usize) -> String {
    let idx = s.find(sub).unwrap();
    substring(&s[idx..], m))
}
```

This code defines several functions that perform the required operations on a given string `s`. These functions include variants for starting from a specific index, substring length, or character/substring within the string.

The provided code is in Java, but it has been converted to Rust with similar functionality.
