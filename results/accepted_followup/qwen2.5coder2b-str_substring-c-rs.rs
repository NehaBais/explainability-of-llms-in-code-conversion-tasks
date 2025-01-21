fn substring(s: &str, n: usize, m: isize) -> Option<&str> {
    if s.is_empty() {
        return None;
    }

    if n >= s.len() || m < 0 {
        return None;
    }

    if m > 0 {
        let start = s.len() - m as usize;
        let end = start + m as usize;
        Some(&s[start..end])
    } else {
        Some(&s[..m as usize])
    }
}

fn str_wholeless1(s: &str) -> Option<&str> {
    substring(s, 0, s.len() - 1)
}

fn str_fromch(s: &str, ch: char, m: isize) -> Option<&str> {
    if let Some(pos) = s.chars().position(|c| c == ch) {
        return substring(&s[pos..], 0, m as usize);
    }
    None
}

fn str_fromstr(s: &str, in_str: &str, m: isize) -> Option<&str> {
    if let Some(pos) = s.chars().position(|c| c == in_str.chars().next().unwrap()) {
        return substring(&s[pos..], 0, m as usize);
    }
    None
}

fn main() {
    let s = "hello world shortest program";

    if let Some(substr) = substring(s, 12, 5) {
        println!("{}", substr);
    } else {
        println!("--error--");
    }

    if let Some(substr) = substring(s, 6, -1) {
        println!("{}", substr);
    } else {
        println!("--error--");
    }

    if let Some(substr) = str_wholeless1(s) {
        println!("{}", substr);
    } else {
        println!("--error--");
    }

    if let Some(substr) = str_fromch(s, 'w', 5) {
        println!("{}", substr);
    } else {
        println!("--error--");
    }

    if let Some(substr) = str_fromstr(s, "ro", 3) {
        println!("{}", substr);
    } else {
        println!("--error--");
    }
}
