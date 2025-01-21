The errors are related to missing imports, wrong indexing type for `str`, mismatched types due to addition of different number types, and incorrect usage of `find()` function. 

To fix the issue, we need to add the appropriate external crates in Rust by using the keyword 'extern' before each crate imports. Also, as indices for a string are usize type in Rust, so integer conversion might be needed when indexing into strings with isize values. The corrected code will look like:

```rust
use unicode_scalar::UnicodeScalar;
use unicode_segmentation::UnicodeSegmentation;
extern crate unicode_scalar;
extern crate unicode_segmentation;

fn str_substring(s: &str, n: isize) -> Option<String> {
    let m = s.graphemes(true).nth((n as usize).. ).map(|g| g.len()).unwrap_or(0);
    if (n as usize) > s.len() || n < 0{ return None;}
    else {return Some(s[((n as usize)..((n+m) as usize)).to_string());}}
}
```

