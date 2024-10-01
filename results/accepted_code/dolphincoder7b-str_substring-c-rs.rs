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
    for (index, c) in s.chars().enumerate() {
        if c == ch {
            return index;
        }
    }

    return std::usize::MAX;
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

fn main() {
    // Get substring of length 5 starting from character 12 in "hello world shortest program"
    let s = "hello world shortest program";
    if let Some(result) = substring(s, 12, 5) {
        println!("{}", result);
    } else {
        println!("--error--");
    }

    // Get substring of length 13 starting from character 6 up to the end in "hello world shortest program"
    if let Some(result) = substring(s, 6, -1) {
        println!("{}", result);
    } else {
        println!("--error--");
    }

    // Get whole string minus last character in "hello world shortest program"
    if let Some(result) = str_wholeless1(s) {
        println!("{}", result);
    } else {
        println!("--error--");
    }

    // Get substring of length 5 starting from the first occurrence of 'w' in "hello world shortest program"
    if let Some(result) = str_fromch(s, 'w', 5) {
        println!("{}", result);
    } else {
        println!("--error--");
    }

    // Get substring of length 3 starting from the first occurrence of 'ro' in "hello world shortest program"
    if let Some(result) = str_fromstr(s, "ro", 3) {
        println!("{}", result);
    } else {
        println!("--error--");
    }
}
