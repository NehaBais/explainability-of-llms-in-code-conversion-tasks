fn str_fromstr<'a>(s: &'a str, in_str: &'a str, m: i64) -> Option<&'a str> {
    if let Some(idx) = s.find(in_str) {
        substring(s, idx, m)
    } else {
        None
    }
}
