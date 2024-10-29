use std::str;
use unicode_scalar::UnicodeScalar;
use unicode_segmentation::UnicodeSegmentation;

fn substring(s: &str, n: usize, m: isize) -> Option<String> {
    if s.is_empty() || n >= s.len() {
        return None;
    }

    let s = match s.char_indices().nth(n) {
        Some((_, c)) => c.to_string(),
        _ => return None,
    };

    if m < 0 {
        let m = (s.len() as isize + m - 1).max(0);
        return Some(s[..m].to_string());
    } else {
        return Some(s[n..(n + m)].to_string());
    }
}

fn str_wholeless1(s: &str) -> Option<String> {
    let len = s.len();
    if len == 0 {
        return None;
    } else {
        return Some(s[..(len - 1)].to_string());
    }
}

fn str_fromch(s: &str, ch: char, m: isize) -> Option<String> {
    let n = s.find(&ch)?;
    return substring(s, n, m);
}

fn str_fromstr(s: &str, in_: &str, m: isize) -> Option<String> {
    let n = match s.find(in_) {
        Some(n) => n + in_.len(),
        _ => return None,
    };

    return substring(s, n, m);
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_substrings() {
        let s = "hello world shortest program";

        assert_eq!(substring(s, 12, 5), Some("short".to_string())); // get "short"
        assert_eq!(
            substring(s, 6, -1),
            Some("world shortest program".to_string())
        ); // get  "world shortest program"
        assert_eq!(
            str_wholeless1(s),
            Some("hello world shortest progra".to_string())
        ); //  "... progra"
        assert_eq!(str_fromch(s, 'w', 5), Some("world".to_string())); //  "world"
        assert_eq!(str_fromstr(s, "ro", 3), Some("rog".to_string())); //  "rog"
    }
}
