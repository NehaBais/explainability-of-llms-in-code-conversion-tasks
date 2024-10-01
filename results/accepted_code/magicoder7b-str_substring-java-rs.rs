fn substring(str: &str, n: usize, m: Option<usize>) -> String {
    match m {
        None => str[n..].to_string(),
        Some(m) => str[n..n + m].to_string(),
    }
}
fn substring(str: &str, n: usize) -> String {
    str[n..].to_string()
}
fn substring(str: &str) -> String {
    str[0..str.len() - 1].to_string()
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
