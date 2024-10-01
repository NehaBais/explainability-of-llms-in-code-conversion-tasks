 Here is the Rust equivalent of the given C code:
```rust
use std::ffi::{CStr, CString};
use std::mem;
use std::os::raw::c_char;
use std::ptr;
use std::slice;

fn substring(s: &str, n: usize, m: isize) -> Option<String> {
    if n >= s.len() || m < 0 {
        return None;
    }

    let mut result = String::new();
    let (start, end) = if m > 0 {
        (n, n + m)
    } else {
        (s.len() - (-m), s.len())
    };
    for c in &s[start..end] {
        result.push(*c as char);
    }

    Some(result)
}

fn str_wholeless1(s: &str) -> Option<String> {
    substring(s, 0, s.len() - 1)
}

fn str_fromch(s: &str, ch: c_char, m: isize) -> Option<String> {
    let mut pos = 0;
    for (i, c) in s.bytes().enumerate() {
        if c == ch {
            return substring(s, i + 1, m);
        }
    }
    None
}

fn str_fromstr(s: &str, in: &str, m: isize) -> Option<String> {
    let mut pos = s.find(in)?;
    substring(s, pos + 1, m)
}

fn main() {
    let s = "hello world shortest program";

    println!("{:?}", substring(s, 12, 5)); // get "short"
    println!("{:?}", substring(s, 6, -1)); // get "world shortest program"
    println!("{:?}", str_wholeless1(s)); // "... progra"
    println!("{:?}", str_fromch(s, b'w', 5)); // "world"
    println!("{:?}", str_fromstr(s, "ro", 3)); // "rog"
}
```
Note that Rust has built-in support for strings and character manipulation, so we don't need to use C strings or the `std::ffi` module. The `substring` function takes a `&str` as input, which is a reference to a string slice. We can then use the `.len()` method on the `str` struct to get the length of the string, and the indexing operator `[]` to access individual characters.

We also use the `Option<T>` type to handle the case where the substring doesn't exist in the input string. The `Some(value)` variant is returned when the substring exists, and the `None` variant is returned when it doesn't.

In the `main` function, we call each of these functions with the appropriate arguments and print the result using the `println!` macro.
