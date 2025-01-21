 The errors you are encountering are due to redefining functions with similar names in Rust. In Rust, function names must be unique within their scope. Hence, you cannot have two different functions named `substring` each taking a different number of parameters. You should rename the functions appropriately so they do not conflict with one another.

Here is your corrected code:

```rs
fn substring_with_n_m(str: &str, n: usize, m: Option<usize>) -> String {
    match m {
        None => str[n..].to_string(),
        Some(m) => str[n..n + m].to_string(),
    }
}
fn substring_with_n(str: &str, n: usize) -> String {
    str[n..].to_string()
}
fn whole_substring(str: &str) -> String {
    str[0..str.len() - 1].to_string()
}
fn substring_with_c(str: &str, c: char, m: usize) -> String {
    let start = str.find(&c).unwrap();
    let end = start + m;
    str[start..end].to_string()
}
fn substring_with_sub(str: &str, sub: &str, m: usize) -> String {
    let start = str.find(sub).unwrap();
    let end = start + m;
    str[start..end].to_string()
}

```

Note that in Rust `str::find()` method returns an option (`Option<usize>`) which can be `None` if the substring is not found, so you have to handle this case as well.
