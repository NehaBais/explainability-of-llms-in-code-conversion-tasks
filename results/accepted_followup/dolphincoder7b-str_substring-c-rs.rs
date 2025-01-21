use std::ptr;
fn substring(s: &str, n: usize, m: i32) -> Option<String> {
    let mut start = 0;

    for _ in 0..n {
        if s.chars().nth(start).unwrap() == '\0' {
            return None;
        }

        start += 1;
    }

    let end = n as usize + m as usize - 1;
    Some(s[start..=end].to_string())
}

fn str_wholeless1(s: &str) -> Option<String> {
    substring(s, 0, s.len() as i32 - 1)
}

fn find(ch: char, s: &str) -> usize {
    let n = s.find(ch);
    match n {
        Some(index) => index,
        None => std::usize::MAX,
    }
}

fn str_fromch(s: &str, ch: char, m: i32) -> Option<String> {
    let n = find(ch, s);
    if n == usize::MAX {
        None
    } else {
        substring(s, n, m)
    }
}

fn str_fromstr(s: &str, in_: &str, m: i32) -> Option<String> {
    let n = find(&in_[..], s);
    if n == usize::MAX {
        None
    } else {
        substring(s, n, m)
    }
}
