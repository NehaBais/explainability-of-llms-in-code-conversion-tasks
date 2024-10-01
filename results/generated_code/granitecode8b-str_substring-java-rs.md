Here is the Rust code that fulfills the requirements you specified:
```
fn substring(s: &str, n: usize, m: Option) -> String {
 match m {
 Some(len) => s[n..(n + len)].to_string(),
 None => s[n..].to_string(),
 }
}
fn substring(s: &str, n: usize) -> String {
 substring(s, n, None)
}
fn substring(s: &str) -> String {
 substring(s, 0, Some(s.len() - 1))
}
fn substring(s: &str, c: char, m: usize) -> String {
 let i = s.find(c).unwrap();
 substring(s, i, Some(m + 1))
}
fn substring(s: &str, sub: &str, m: usize) -> String {
 let i = s.find(sub).unwrap();
 substring(s, i, Some(m + 1))
}
```
This code uses the `Option` type to represent the "up to" or "of length" cases. The `find()` method is used to find the starting index of a character or substring within the string. The `to_string()` method is used to convert slices of `str` into `String`. Note that this code assumes that the input string contains valid Unicode characters, and does not handle invalid encodings such as ASCII or EUC-JP.

