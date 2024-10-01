use std::ffi::CString;

fn substring<'a>(s: &'a str, n: usize, m: i64) -> Option<&'a str> {
    let s_bytes = s.as_bytes();
    if n >= s.len() || m < 0 {
        return None;
    }
    if m < 0 {
        Some(&s[n..s.len()])
    } else {
        Some(&s[n..std::cmp::min(n + m as usize, s.len())])
    }
}

fn str_wholeless1(s: &str) -> Option<&str> {
    substring(s, 0, -(s.len() as i64) - 1)
}

fn str_fromch(s: &str, ch: char, m: i64) -> Option<&str> {
    if let Some(idx) = s.find(ch) {
        substring(s, idx, m)
    } else {
        None
    }
}

fn str_fromstr(s: &str, in_str: &str, m: i64) -> Option<&str> {
    if let Some(idx) = s.find(in_str) {
        substring(s, idx, m)
    } else {
        None
    }
}

fn main() {
    let s = "hello world shortest program";

    println!("{}", substring(s, 12, 5).unwrap()); // get "short"
    println!("{}", substring(s, 6, -(s.len() as i64) - 1).unwrap()); // get "world shortest program"
    println!("{}", str_wholeless1(s).unwrap()); // "... progra"
    println!("{}", str_fromch(s, 'w', 5).unwrap()); // "world"
    println!("{}", str_fromstr(s, "ro", 3).unwrap()); // "rog"
}
