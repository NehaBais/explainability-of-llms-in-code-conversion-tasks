pub fn substring(str: &str, n: usize, m: usize) -> &str {
    &str[n..n + m]
}

pub fn substring_from(str: &str, n: usize) -> &str {
    &str[n..]
}

pub fn substring_except_last(str: &str) -> &str {
    &str[..str.len() - 1]
}

pub fn substring_from_char(str: &str, c: char, m: usize) -> &str {
    let start = str.find(c).unwrap();
    &str[start..start + m + 1]
}

pub fn substring_from_substring(str: &str, sub: &str, m: usize) -> &str {
    let start = str.find(sub).unwrap();
    &str[start..start + m + 1]
}
