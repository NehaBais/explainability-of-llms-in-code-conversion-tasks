fn substring_from_index(s: &str, n: usize) -> String {
    substring(s, n, None)
}
fn substring_to_end(s: &str, n: usize) -> String {
    substring(s, n, None)
}
fn substring_all_but_last(s: &str) -> String {
    substring(s, 0, Some(s.len() - 1))
}
fn substring_from_char(s: &str, c: char, m: usize) -> String {
    let i = s.find(c).unwrap();
    substring(s, i, Some(m + 1))
}
fn substring_from_str(s: &str, sub: &str, m: usize) -> String {
    let i = s.find(sub).unwrap();
    substring(s, i, Some(m + 1))
}
