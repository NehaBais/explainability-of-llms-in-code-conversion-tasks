The error occurs because Rust does not know how to handle lifetimes for function return types that reference parameters. The lifetime specifier is missing.

A fix could be to introduce named lifetime parameters, which specify the minimum duration for which a piece of data is valid.

Here's the corrected code:

```rs
extern crate unicode_segmentation;
use unicode_segmentation::UnicodeSegmentation;

pub fn substring<'a>(str: &'a str, n: usize, m: usize) -> Option<&'a str> {
    let graphemes = UnicodeSegmentation::graphemes(str.chars(), true).collect::<Vec<&'a str>>();
    if n + m > graphemes.len() {
        return None;
    }
    Some(&graphemes[n..(n + m)].join(""))
}

pub fn substring_from_n<'a>(str: &'a str, n: usize) -> Option<&'a str> {
    let graphemes = UnicodeSegmentation::graphemes(str.chars(), true).collect::<Vec<&'a str>>();
    if n > graphemes.len() {
        return None;
    }
    Some(&graphemes[n..].join(""))
}

pub fn substring_minus_last_char<'a>(str: &'a str) -> Option<&'a str> {
    let graphemes = UnicodeSegmentation::graphemes(str.chars(), true).collect::<Vec<&'a str>>();
    if graphemes.len() == 0 {
        return None;
    }
    Some(&graphemes[0..(graphemes.len() - 1)].join(""))
}

pub fn substring_from_c<'a>(str: &'a str, c: char, m: usize) -> Option<&'a str> {
    let mut chars = str.chars();
    let start_index = match chars.position(|ch| ch == c) {
        Some(i) => i,
        None => return None,
    };
    let graphemes = UnicodeSegmentation::graphemes(str.chars(), true).collect::<Vec<&'a str>>();
    if start_index + m + 1 > graphemes.len() {
        return None;
    }
    Some(&graphemes[start_index..(start_index + m + 1)].join(""))
}

pub fn substring_from_substring<'a>(str: &'a str, sub: &str, m: usize) -> Option<&'a str> {
    let start_index = match str.find(sub) {
        Some(i) => i,
        None => return None,
    };
    let graphemes = UnicodeSegmentation::graphemes(str.chars(), true).collect::<Vec<&'a str>>();
    if start_index + m + 1 > graphemes.len() {
        return None;
    }
    Some(&graphemes[start_index..(start_index + m + 1)].join(""))
}
```

In the corrected code, I've added a lifetime parameter `'a` to each function and its parameter types. The `Option<&'a str>` return type indicates that the returned string may or may not be valid after the function returns.
