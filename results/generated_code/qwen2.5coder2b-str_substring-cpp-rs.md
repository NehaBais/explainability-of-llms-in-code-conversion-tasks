```rust
fn main() {
    let s = "0123456789".to_string();

    let n = 3;
    let m = 4;
    let c: char = '2';
    let sub: &str = "456";

    println!("Substring from {} characters in and of {} length: {}", n, m, s[n..n+m]);
    println!("Substring from {} characters in to the end of the string: {}", n, s[n..]);
    println!("Whole string minus the last character: {}", &s[..s.len() - 1]);
    println!("Substring starting from a known character within the string and of {} length: {}", c, s.chars().skip(s.find(c).unwrap()).take(m));
    println!("Substring starting from a known substring within the string and of {} length: {}", sub, s.chars().skip(s.find(sub).unwrap()).take(m));
}
```

Note that this program only works for valid Unicode characters as per the requirements. Also, Rust's `char` type is UTF-16 by default, but it can also be UTF-8 if configured to be so. In order to handle UTF-32, you would need to use `str::from_utf32` or `String::from_utf32_lossy`.
