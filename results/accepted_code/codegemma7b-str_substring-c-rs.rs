use std::mem;

fn substring(s: &str, n: usize, m: isize) -> Option<String> {
    if s.is_empty() || n > s.len() || m < 0 {
        return None;
    }

    let m = if m < 0 {
        s.len() as isize + m - n as isize + 1
    } else {
        m
    };

    let start = &s[n..];
    let end = &start[..m as usize];
    Some(end.to_string())
}

fn str_wholeless1(s: &str) -> Option<String> {
    substring(s, 0, s.len() as isize - 1)
}

fn str_fromch(s: &str, ch: char, m: isize) -> Option<String> {
    let pos = s.find(ch)?;
    substring(s, pos, m)
}

fn str_fromstr(s: &str, in: &str, m: isize) -> Option<String> {
    let pos = s.find(in)?;
    substring(s, pos, m)
}

fn main() {
    let s = "hello world shortest program";

    println!("{}", substring(s, 12, 5).unwrap()); // get "short"
    println!("{}", substring(s, 6, -1).unwrap()); // get "world shortest program"
    println!("{}", str_wholeless1(s).unwrap()); // "... progra"
    println!("{}", str_fromch(s, 'w', 5).unwrap()); // "world"
    println!("{}", str_fromstr(s, "ro", 3).unwrap()); // "rog"
}