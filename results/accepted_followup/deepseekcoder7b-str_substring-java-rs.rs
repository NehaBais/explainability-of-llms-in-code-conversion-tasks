fn substring<'a>(s: &'a str, n: usize, m: usize) -> &'a str {
    &s[n..n + m]
}

fn substring_from_n<'a>(s: &'a str, n: usize) -> &'a str {
    &s[n..]
}

fn substring_except_last<'a>(s: &'a str) -> &'a str {
    let last = s.len() - 1;
    &s[..last]
}

fn substring_from_char<'a>(s: &'a str, c: char, m: usize) -> &'a str {
    let start = s.find(c).unwrap();
    &s[start..start + m + 1]
}

fn substring_from_substring<'a>(s: &'a str, sub: &'a str, m: usize) -> &'a str {
    let start = s.find(sub).unwrap();
    &s[start..start + m + 1]
}
