fn substring(s: &str, mut n: usize, m: isize) -> Option<String> {
    let str_len = s.chars().count();

    if let Some((prefix, rest)) = s.split_at(n) {
        let end_index = if m < 0 {
            str_len as isize + m - n as isize + 1
        } else {
            m
        };

        if n < 0 || end_index < 0 || str_len < n {
            return None;
        }

        let start = rest.chars().nth(0)?;
        let end = rest.chars().nth(end_index as usize)?;

        Some(format!("{}{}", prefix, &s[start..end]))
    } else {
        None
    }
}

fn str_wholeless1(s: &str) -> Option<String> {
    substring(s, 0, (s.chars().count() - 1) as isize)
}

fn str_fromch(s: &str, ch: char, m: isize) -> Option<String> {
    if let Some((_, rest)) = s.split_at(s.find(ch)?.unwrap()) {
        substring(rest, 0, m)
    } else {
        None
    }
}

fn str_fromstr(s: &str, substring: &str, m: isize) -> Option<String> {
    if let Some((_, rest)) = s.split_at(s.find(substring)?.unwrap()) {
        substring(rest, 0, m)
    } else {
        None
    }
}

fn main() {
    let s = "hello world shortest program";

    println!("{:?}", substring(s, 12, 5)); // get "short"
    println!("{:?}", str_wholeless1(s));  // get whole string except last character
    println!("{:?}", str_fromch(s, 'o', 4));  // get substring from next 'o' for length of 4
    println!("{:?}", str_fromstr(s, "short", 7)); // get substring from 'short' for length of 7
}