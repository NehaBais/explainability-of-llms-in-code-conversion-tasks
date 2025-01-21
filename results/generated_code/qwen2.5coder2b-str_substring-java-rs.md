```rust
fn substring(s: &str, n: usize) -> &str {
    s.get(n..).unwrap_or("")
}

fn substring(s: &str, n: usize, m: usize) -> &str {
    s.get(n..n + m).unwrap_or("")
}

fn substring(s: &str) -> &str {
    s.get(..s.len() - 1).unwrap_or("")
}

fn substring(s: &str, c: char, m: usize) -> &str {
    if let Some(i) = s.chars().position(|&c| c == c) {
        s.get(i..i + m).unwrap_or("")
    } else {
        ""
    }
}

fn substring(s: &str, sub: &str, m: usize) -> &str {
    if let Some(i) = s.find(sub) {
        s.get(i..i + m).unwrap_or("")
    } else {
        ""
    }
}
```
Please note that the Rust's API for string manipulation is designed to be more explicit and idiomatic than Java. This means it can handle both UTF-8 and UTF-16 encoding, without requiring special handling. If you need to specifically handle UTF-8 or UTF-16, you might have to use external crates like `utf8-rs` or `unicode-normalization`.
