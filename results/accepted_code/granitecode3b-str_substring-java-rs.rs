fn substring_n_m(str: &str, n: usize, m: usize) -> String {
    str[n..n + m].to_string()
}
fn substring_n(str: &str, n: usize) -> String {
    str[n..].to_string()
}
fn substring_until_end(str: &str) -> String {
    str[..str.len() - 1].to_string()
}
fn substring_from_known_char(str: &str, c: char, m: usize) -> String {
    str[str.find(c).unwrap()..str.find(c).unwrap() + m + 1].to_string()
}
fn substring_from_known_substring(str: &str, sub: &str, m: usize) -> String {
    str[str.find(sub).unwrap()..str.find(sub).unwrap() + m + 1].to_string()
}
