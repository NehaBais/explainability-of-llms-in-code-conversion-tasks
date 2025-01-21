pub fn substring_from_substring<'a>(str: &'a str, sub: &'a str, m: usize) -> &'a str {
    let start = str.find(sub).unwrap();
    &str[start..start + m + 1]
}
