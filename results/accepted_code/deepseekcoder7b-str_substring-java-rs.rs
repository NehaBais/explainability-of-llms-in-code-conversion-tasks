fn substring(s: &str, n: usize, m: usize) -> &str {
    &s[n..n + m]
}

fn substring_from_n(s: &str, n: usize) -> &str {
    &s[n..]
}

fn substring_except_last(s: &str) -> &str {
    let last = s.len() - 1;
    &s[..last]
}

fn substring_from_char(s: &str, c: char, m: usize) -> &str {
    let start = s.find(c).unwrap();
    &s[start..start + m + 1]
}

fn substring_from_substring(s: &str, sub: &str, m: usize) -> &str {
    let start = s.find(sub).unwrap();
    &s[start..start + m + 1]
}
