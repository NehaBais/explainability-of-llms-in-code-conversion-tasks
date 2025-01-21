The Rust version of the code is as follows:

```rust
use std::ffi::{CStr, CString};

fn substring(s: &str, n: usize, m: isize) -> Option<&str> {
    if s.is_empty() {
        return None;
    }

    if n >= s.len() || m < 0 {
        return None;
    }

    if m > 0 {
        let start = s.len() - m as usize;
        let end = start + m as usize;
        Some(&s[start..end])
    } else {
        Some(&s[..m as usize])
    }
}

fn str_wholeless1(s: &str) -> Option<&str> {
    substring(s, 0, s.len() - 1)
}

fn str_fromch(s: &str, ch: char, m: isize) -> Option<&str> {
    if let Some(pos) = s.chars().position(|c| c == ch) {
        return substring(&s[pos..], 0, m as usize);
    }
    None
}

fn str_fromstr(s: &str, in_str: &str, m: isize) -> Option<&str> {
    if let Some(pos) = s.chars().position(|c| c == in_str.chars().next().unwrap()) {
        return substring(&s[pos..], 0, m as usize);
    }
    None
}

fn main() {
    let s = "hello world shortest program";

    if let Some(substr) = substring(s, 12, 5) {
        println!("{}", substr);
    } else {
        println!("--error--");
    }

    if let Some(substr) = substring(s, 6, -1) {
        println!("{}", substr);
    } else {
        println!("--error--");
    }

    if let Some(substr) = str_wholeless1(s) {
        println!("{}", substr);
    } else {
        println!("--error--");
    }

    if let Some(substr) = str_fromch(s, 'w', 5) {
        println!("{}", substr);
    } else {
        println!("--error--");
    }

    if let Some(substr) = str_fromstr(s, "ro", 3) {
        println!("{}", substr);
    } else {
        println!("--error--");
    }
}
```

The `substring` function is implemented to handle the substring logic similar to the C code. It returns an Option for error conditions and ensures that it only returns a valid substring if all parameters are valid.

The other functions (`str_wholeless1`, `str_fromch`, and `str_fromstr`) are simply wrappers around the `substring` function, adjusting the starting position based on whether the parameter is an integer or a string.
