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
