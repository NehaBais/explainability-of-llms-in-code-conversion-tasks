The Rust version of the given Java code is as follows:
```
fn substring(str: &str, n: usize, m: Option<usize>) -> String {
    match m {
        Some(m) => str[n..(n + m)].to_string(),
        None => str.chars().skip(n).collect::<String>(),
    }
}
fn substring(str: &str, n: usize) -> String {
    str.chars().skip(n).collect::<String>()
}
fn substring(str: &str) -> String {
    match str.len() {
        0 => "".to_string(),
        _ => str[..str.len()-1].to_string(),
    }
}
fn substring(str: &str, c: char, m: Option<usize>) -> String {
    match (c as u32).utf8().size_hint() {
        (_, Some(m)) if (n + m) < str.len() =>
            str[n..(n + m)].to_string(),
        _ => "".to_string(),
    }
}
fn substring(str: &str, sub: &str, m: Option<usize>) -> String {
    match (sub as u32).utf8().size_hint() {
        (_, Some(m)) if (n + m) < str.len() =>
            str[n..(n + m)].to_string(),
        _ => "".to_string(),
    }
}
```
The `str` variable is a reference to the string which we want to slice. The `n`, `m`, `c`, and `sub` variables are all indices or characters, with some constraints (e.g., `m` should be positive). The `match` blocks handle different input cases, and each function returns a `String`.
The `str[n..(n + m)].to_string()` expression slices the string using Rust's standard substring syntax: the two dots in the slice indices are interpreted as a range from `n` to `n + m - 1`, inclusive. The `.chars().skip(n).collect::<String>()` and `.chars().skip(n + m).collect::<String>()` expressions are used to achieve the desired functionality with indices, but they are not applicable for characters.
The `match (c as u32).utf8().size_hint() { ... }` block checks whether the index or character is valid UTF-8. The expression `(c as u32).utf8().size_hint()` returns a tuple of `(i, Option<usize>)`, where `i` represents the byte index and `Option<usize>` represents the size hint. We only need to check if there's a size hint (`Some(m)`), and ensure that `n + m` is within the string bounds.
The `match (sub as u32).utf8().size_hint() { ... }` block checks whether the substring is valid UTF-8, just like the previous block. The only difference is that we need to check if the index or character is inside the string (`n < str.len()`), and that's it.
