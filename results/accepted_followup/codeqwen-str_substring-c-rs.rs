fn str_fromstr(s: &str, substring: &str, m: Option<usize>) -> Result<String, &'static str> {
    let pos = s.find(substring);
    match pos {
        Some(pos) => substring(s, pos, m),
        None => Err("substring not found"),
    }
}
