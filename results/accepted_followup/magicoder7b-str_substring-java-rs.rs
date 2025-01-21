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
