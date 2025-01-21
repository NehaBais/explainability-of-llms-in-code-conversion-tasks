The error occurs because the function `substring_from_substring` does not specify a lifetime for the borrowed string, which is required when it borrows data from both `str` and `sub`. The fix is to add a named lifetime parameter to the function signature.

```rust
pub fn substring_from_substring<'a>(str: &'a str, sub: &'a str, m: usize) -> &'a str {
    let start = str.find(sub).unwrap();
    &str[start..start + m + 1]
}
```
