
Here is the Rust equivalent of the Java code:
```rust
fn substring(str: &str, n: usize, m: usize) -> String {
    return str[n..=m].to_string();
}

fn substring(str: &str, n: usize) -> String {
    return str[n..].to_string();
}

fn substring(str: &str) -> String {
    let last_char = str.chars().last();
    if let Some(last_char) = last_char {
        return str[0..=last_char.len() - 1].to_string();
    } else {
        return "".to_string();
    }
}

fn substring(str: &str, c: char, m: usize) -> String {
    let index = str.find(c).unwrap();
    return str[index..=index+m].to_string();
}

fn substring(str: &str, sub: &str, m: usize) -> String {
    let index = str.find(sub).unwrap();
    return str[index..=index+m].to_string();
}
```
Note that the Rust code uses `&str` instead of `String` for string slices and `char` instead of `String` for characters. Also, the `substring` function in Rust returns a new `String` object, while the Java version returns a `StringBuilder` object.

Also note that the `indexOf` method is not available in Rust, so we have to use the `find` method instead. The `find` method returns an optional value, so we need to handle the case where the substring is not found.
