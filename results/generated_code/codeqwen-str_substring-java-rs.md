In Rust, the equivalent code would look like this:

```rust
pub fn substring(&self, n: usize) -> &str {
    &self.chars().skip(n).collect::<String>()
}

pub fn substring(&self, n: usize, m: usize) -> &str {
    &self[n..n+m]
}

pub fn substring(&self) -> &str {
    &self[0..self.len().saturating_sub(1)]
}

pub fn substring(&self, c: char) -> Option<&str> {
    let idx = self.find(c)?;
    Some(&self[idx..self.chars().skip(idx).take(1).count() + idx])
}

pub fn substring_with_length(&self, sub: &str, m: usize) -> Option<&str> {
    let idx = self.find(sub)?;
    Some(&self[idx..idx+m+sub.len()])
}
```
In Rust we use `usize` for indexing arrays and strings. The `saturating_sub` function is used to prevent underflow when subtracting 1 from the length of a string in case it's zero, which means there would be no character to exclude.

This version of the code handles Unicode characters correctly as Rust uses UTF-8 by default.
