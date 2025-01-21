fn str_fromstr(s: &str, in_str: &str, m: isize) -> Option<String> {
    let pos = s.find(in_str)?;
    substring(s, pos, m)
}
