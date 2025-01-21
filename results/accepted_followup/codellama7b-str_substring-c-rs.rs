fn substring(s: &str, n: usize, m: isize) -> Option<String> {
    let start = s.char_indices().nth(n).unwrap();
    let end = s.char_indices().nth(m + 1).unwrap();
    let substring = &s[start.0..end.0];
    Some(substring.to_string())
}
