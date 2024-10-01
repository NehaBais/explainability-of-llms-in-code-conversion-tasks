Rust's `&str` type does not support indexing or slicing for characters beyond the Basic Multilingual Plane. Therefore, you need to use `unicode-segmentation` crate to handle this requirement. You can add it by adding `unicode-segmentation = "1.8.0"` in your Cargo.toml file.

Here is the equivalent Rust code:

```rust
extern crate unicode_segmentation;
use unicode_segmentation::UnicodeSegmentation;

pub fn substring(str: &str, n: usize, m: usize) -> &str {
    let graphemes = UnicodeSegmentation::graphemes(str.chars(), true).collect::<Vec<&str>>();
    if n+m > graphemes.len() { 
        panic!("Index out of bounds");
    }
    &graphemes[n..(n+m)].join("")
}

pub fn substring_from_n(str: &str, n: usize) -> &str {
    let graphemes = UnicodeSegmentation::graphemes(str.chars(), true).collect::<Vec<&str>>();
    if n > graphemes.len() { 
        panic!("Index out of bounds");
    }
    &graphemes[n..].join("")
}

pub fn substring_minus_last_char(str: &str) -> &str {
    let graphemes = UnicodeSegmentation::graphemes(str.chars(), true).collect::<Vec<&str>>();
    if graphemes.len() == 0 { 
        panic!("Index out of bounds");
    }
    &graphemes[0..(graphemes.len()-1)].join("")
}

pub fn substring_from_c(str: &str, c: char, m: usize) -> Option<&str> {
    let mut chars = str.chars();
    let start_index = match chars.position(|ch| ch == c) {
        Some(i) => i,
        None => return None
    };
    let graphemes = UnicodeSegmentation::graphemes(str.chars(), true).collect::<Vec<&str>>();
    if start_index+m+1 > graphemes.len() { 
        panic!("Index out of bounds");
    }
    Some(&graphemes[start_index..(start_index+m+1)].join(""))
}

pub fn substring_from_substring(str: &str, sub: &str, m: usize) -> Option<&str> {
    let start_index = match str.find(sub) {
        Some(i) => i,
        None => return None
    };
    let graphemes = UnicodeSegmentation::graphemes(str.chars(), true).collect::<Vec<&str>>();
    if start_index+m+1 > graphemes.len() { 
        panic!("Index out of bounds");
    }
    Some(&graphemes[start_index..(start_index+m+1)].join(""))
}
```

This code first segments the input string into Unicode grapheme clusters, then slices and joins these graphemes according to the given indices. The `substring_from_c` and `substring_from_substring` functions return `Option<&str>` because they could fail if the character or substring is not found in the string. The caller needs to handle this `None` case.
