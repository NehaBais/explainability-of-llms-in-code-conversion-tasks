In Rust:

```rust
pub fn substring(s: &str, n: usize, m: usize) -> &str {
    let (a, b) = s.split_at(n);
    b.get(0..m).unwrap() 
}

pub fn substring(s: &str, n: usize) -> &str {
    let _ = s.split_at(n);
    &s[n..]
}

pub fn substring(s: &str) -> &str {
    let (a, b) = s.split_at(s.len()-1);
    b
}

pub fn substring(s: &str, c: char, m: usize) -> &str {
    if let Some(pos) = s.chars().position(|ch| ch == c) {
        let (a, b) = s.split_at(pos);
        b.get(0..m+1).unwrap() 
    } else {
       ""
    }
}

pub fn substring(s: &str, sub: &str, m: usize) -> &str {
    if let Some(pos) = s.find(sub){
        let (a, b) = s.split_at(pos);
        b.get(0..m+1).unwrap() 
    } else {
       ""
    }
}
```
Please note that unlike Java, Rust has a different handling of string manipulation since it deals with bytes and not Unicode code points directly. Therefore, the substring function may return an invalid UTF-8 sequence if you're working on a string encoded in UTF-8. For more advanced string manipulation features like splitting strings into individual unicode characters without considering their encoding, you should use the `UnicodeSegmentation` crate available on crates.io.
