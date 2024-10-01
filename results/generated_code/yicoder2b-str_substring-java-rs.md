The equivalent code in Rust would be:

```rust
fn Substring(s: &str, n: usize, m: usize) -> &str {
    if s.is_empty() || n >= s.len() { 
        return ""; 
    }
    &s[n..n+m]
}

fn Substring(s: &str, n: char) -> &str {
    if s.is_empty() {
        return "";
    }
    &s[s.find(&n).unwrap()..]
}

fn Substring(s: &str) -> &str {
    if s.is_empty() || s.len() == 1 {
        return "";
    }
    &s[0..s.len()-1]
}

fn Substring(s: &str, c: char, m: usize) -> &str {
    if s.is_empty() || s.find(&c) == None { 
        return "";  
    }
    &s[s.find(&c).unwrap()..s.find(&c)+m+1]
}

fn Substring(s: &str, sub: &str, m: usize) -> &str {
    if s.is_empty() || !s.contains(sub) {  
        return "";  
    }
    &s[s.find(*sub).unwrap()..s.rfind(*sub)+m+1]
}
```
The function `Substring` takes a string and various parameters, performing the required operations based on their types. Rust's string slice syntax is used for each operation, and error handling is added to handle edge cases where these methods might return `None` or fail (e.g. when attempting to locate a character that isn't present). The `&str` return type ensures that the returned values are strings (`str`), not slices of the original string.
This code also assumes that the input string is always UTF-8, since Rust doesn't have built in support for Unicode (like Java does).
