 In Rust, the `substr` method is used instead of `substring`. The function parameters are similar to that in Java and it is important to note that Rust's `usize` type is used for string indexing which can handle any possible length. This makes it compatible with any Unicode character as well because UTF-8 and UTF-16 both use variable numbers of bytes per code unit, so a single code point can be represented using any number of bytes.

Here's the Rust version of your Java code:
```rust
fn substring(str: &str, n: usize, m: Option<usize>) -> String {
    match m {
        None => str[n..].to_string(),
        Some(m) => str[n..n+m].to_string()
    }
}
fn substring(str: &str, n: usize) -> String {
    str[n..].to_string()
}
fn substring(str: &str) -> String {
    str[0..str.len()-1].to_string()
}
fn substring(str: &str, c: char, m: usize) -> String {
    let start = str.find(&c).unwrap();
    let end = start + m;
    str[start..end].to_string()
}
fn substring(str: &str, sub: &str, m: usize) -> String {
    let start = str.find(sub).unwrap();
    let end = start + m;
    str[start..end].to_string()
}
```

In Rust, strings are reference types and can't be sliced directly using array indexing syntax (`str[n]` or `str[n..m]`), which is why the methods `substring` take a string slice `&str`. 

Also note that in case of error while finding a substring with character or string, the code will panic because `unwrap()` is used. You may want to handle it differently based on your needs.
