The error occurs because Rust doesn't have direct support for operations on strings or Unicode code points. To use `str` in Rust, it needs to be imported at the start of your program: `use std::str;`. This code will work with any valid UTF-8 string or Unicode code point. 

The error message is due to the fact that Rust expects `Option<usize>` but we're passing an integer (0) instead, causing the type mismatch. We can fix this by wrapping the integer in a `Some` function. For example, `if indx >= Some(0)` will resolve the issue.

Additionally, when trying to index into a string using a range of the form `(start..end)`, Rust expects an object that implements the `SliceIndex` trait, but we're providing an `Option<usize>` instead, which doesn't implement it. To fix this, Rust provides other options to index into strings, such as indexing by slices or byte offsets. We can change `s[indx..indx  + m]` to `s[indx.unwrap()..]` to get the desired output.

Here's the corrected code:
```rust
use std::str;

fn main() {
    let s = "abcdefgh";
    let n = 2;
    let m = 3;
    let char = 'd';
    let chars = "cd";

    // Starting from n characters in and m length.
    println!("{}", &s[n - 1..n + m]);

    // Starting from n characters in, up to the end of the string.
    println!("{}", &s[n..]);

    // Whole string minus last character.
    println!("{}", &s[..s.len() - 1]);

    // Indexing by slices or byte offsets.
    println!("{}", s.chars().nth(n - 1).unwrap());
    println!("{}", str::from_utf8(&s.as_bytes()[..]).unwrap());
}
```
