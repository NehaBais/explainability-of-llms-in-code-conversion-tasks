use std::ffi::CString;
use std::ptr::null_mut;
use std::str;

fn substring(s: &str, n: usize, m: isize) -> Option<String> {
    if s.is_empty() || n >= s.len() {
        return None;
    }

    let mut start = n;
    while start > 0 && !s.is_char_boundary(start) {
        start -= 1;
    }

    if start != n {
        return None;
    }

    let end = if m < 0 {
        s.len() as isize + m - n as isize
    } else {
        (n as isize + m) as usize
    };

    if end > s.len() as isize || end < 0 {
        return None;
    }

    let result = s[start..end].to_string();
    Some(result)
}

fn str_wholeless1(s: &str) -> Option<String> {
    substring(s, 0, (s.len() - 1) as isize)
}

fn str_fromch(s: &str, ch: char, m: isize) -> Option<String> {
    if let Some(pos) = s.find(ch) {
        substring(&s[pos..], pos, m)
    } else {
        None
    }
}

fn str_fromstr(s: &str, inp: &str, m: isize) -> Option<String> {
    if let Some(pos) = s.find(inp) {
        substring(&s[pos..], pos, m)
    } else {
        None
    }
}

fn main() {
    let s = "hello world shortest program";

    match substring(s, 12, 5) {
        Some(r) => println!("{}", r),
        None => println!("--error--"),
    }

    match substring(s, 6, -1) {
        Some(r) => println!("{}", r),
        None => println!("--error--"),
    }

    match str_wholeless1(s) {
        Some(r) => println!("{}", r),
        None => println!("--error--"),
    }

    match str_fromch(s, 'w', 5) {
        Some(r) => println!("{}", r),
        None => println!("--error--"),
    }

    match str_fromstr(s, "ro", 3) {
        Some(r) => println!("{}", r),
        None => println!("--error--"),
    }
}