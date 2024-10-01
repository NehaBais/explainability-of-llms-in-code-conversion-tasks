Rust doesn't have built-in support for Unicode strings or methods like Javascript's `substr` or `substring`, but we can implement a similar functionality using the `unicode-segmentation` crate to properly handle Unicode characters.

Here is how you might implement this in Rust:

```rust
extern crate unicode_segmentation;

use std::char;
use unicode_segmentation::UnicodeSegmentation;

fn substring(str: &str, n: usize, m: Option<usize>) -> String {
    let mut iter = str.graphemes(true).skip(n);
    match m {
        Some(m) => iter.take(m).collect(),
        None => iter.collect()
    }
}

fn main() {
    let str = "abcdefgh";

    println!("{}", substring(str, 2, Some(3))); // cde

    println!("{}", substring(str, 2, None)); // cdefgh

    println!("{}", substring(str, 0, Some(str.len() - 1))); // abcdefg

    for c in 'b'..'d' {
        println!("{}", substring(&str[str.find(c).unwrap_or(0)..], 0, Some(3))); // bcd
    }
}
```
In the above code, the `substring` function takes a string and optional length. It uses the `graphemes` iterator from the `unicode-segmentation` crate to properly handle Unicode characters.

The `main` method then shows how to use this function in various situations: getting a substring of a certain length starting at a specific position, getting the rest of the string after a certain position, getting the entire string minus its last character, and getting substrings based on known characters or substrings within the original string.
