use unicode_segmentation::UnicodeSegmentation;
use std::ptr;

fn substring(s: &str, n: usize, m: isize) -> Option<String> {
    let chars: Vec<&str> = s.graphemes(true).collect();
    
    if m < 0 {
        if -m as usize > chars.len() {
            return None;
        }
        n += -m as usize;
    } else if n >= chars.len() || m == 0 {
        return None;
    }

    let start = chars.get(n)?;
    let end = if m == isize::MAX {
        Some(chars.iter().last())
    } else {
        start.nth(m as usize)
    };

    let substr: String = start.take_while(|&x| x != end).collect();
    Some(substr)
}

fn str_wholeless1(s: &str) -> Option<String> {
    substring(s, 0, s.graphemes(true).count() as isize - 1)
}

fn str_fromch(s: &str, ch: char) -> Option<String> {
    let pos = s.find(ch)?;
    substring(s, pos, std::isize::MAX)
}

fn str_fromstr(s: &str, in_str: &str) -> Option<String> {
    let pos = s.find(in_str)?;
    substring(s, pos, std::isize::MAX)
}

macro_rules! TEST {
    ($A:expr) => {{
        match $A {
            Some(r) => println!("{}", r),
            None => println!("--error--"),
        }
    }};
}

fn main() {
    let s = "hello world shortest program";

    TEST!(substring(s, 12, 5)); // get "short"
    TEST!(substring(s, 6, -1)); // get "world shortest program"
    TEST!(str_wholeless1(s));   // "... progra"
    TEST!(str_fromch(s, 'w'));  // "world"
    TEST!(str_fromstr(s, "ro"));// "rog"
}