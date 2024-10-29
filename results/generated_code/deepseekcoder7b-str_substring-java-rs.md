In Rust, the equivalent code would be:

Note that rust's `String` type has several methods for substring handling but these do not provide index-based access like Java's String's `substring()` method. Therefore we are going to use slice syntax (`&str`) instead of creating new `String` objects. We will need to convert from unicode scalar values (which is what Rust Strings store, unlike Java Strings), and as such we'll have to handle unicode characters with more than one code unit (such as emoji).

```rust
fn substring(s: &str, n: usize, m: usize) -> &str {
    &s[n..n + m]
}

fn substring_from_n(s: &str, n: usize) -> &str {
    &s[n..]
}

fn substring_except_last(s: &str) -> &str {
    let last = s.len() - 1;
    &s[..last]
}

fn substring_from_char(s: &str, c: char, m: usize) -> &str {
    let start = s.find(c).unwrap();
    &s[start..start + m + 1]
}

fn substring_from_substring(s: &str, sub: &str, m: usize) -> &str {
    let start = s.find(sub).unwrap();
    &s[start..start+m+1]
}
```
This code assumes that the input string is valid UTF-8 and will panic if indices are out of bounds or characters can't be found, as `String`'s `find()` method returns an `Option`. In a real world scenario you would need to handle these possibilities (e.g., return a special "not found" value, throw an exception etc). 

Rust has robust support for Unicode and UTF-8 so this should work fine with any valid unicode string or byte sequence. As with Java, it will not be compatible with all possible inputs (such as strings containing non-latin characters), but the standard library provides extensive support for handling utf-8 encoded text.

