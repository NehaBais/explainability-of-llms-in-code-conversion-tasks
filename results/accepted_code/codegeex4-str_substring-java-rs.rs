extern crate unicode_segmentation;
use unicode_segmentation::UnicodeSegmentation;

pub fn substring(str: &str, n: usize, m: usize) -> &str {
    let graphemes = UnicodeSegmentation::graphemes(str.chars(), true).collect::<Vec<&str>>();
    if n + m > graphemes.len() {
        panic!("Index out of bounds");
    }
    &graphemes[n..(n + m)].join("")
}

pub fn substring_from_n(str: &str, n: usize) -> &str {
    let graphemes = UnicodeSegmentation::graphemes(str.chars(), true).collect::<Vec<&str>>();
    if n > graphemes.len() {
        panic!("Index out of bounds");
    }
    &graphemes[n..].join("")
}

pub fn substring_minus_last_char(str: &str) -> &str {
    let graphemes = UnicodeSegmentation::graphemes(str.chars(), true).collect::<Vec<&str>>();
    if graphemes.len() == 0 {
        panic!("Index out of bounds");
    }
    &graphemes[0..(graphemes.len() - 1)].join("")
}

pub fn substring_from_c(str: &str, c: char, m: usize) -> Option<&str> {
    let mut chars = str.chars();
    let start_index = match chars.position(|ch| ch == c) {
        Some(i) => i,
        None => return None,
    };
    let graphemes = UnicodeSegmentation::graphemes(str.chars(), true).collect::<Vec<&str>>();
    if start_index + m + 1 > graphemes.len() {
        panic!("Index out of bounds");
    }
    Some(&graphemes[start_index..(start_index + m + 1)].join(""))
}

pub fn substring_from_substring(str: &str, sub: &str, m: usize) -> Option<&str> {
    let start_index = match str.find(sub) {
        Some(i) => i,
        None => return None,
    };
    let graphemes = UnicodeSegmentation::graphemes(str.chars(), true).collect::<Vec<&str>>();
    if start_index + m + 1 > graphemes.len() {
        panic!("Index out of bounds");
    }
    Some(&graphemes[start_index..(start_index + m + 1)].join(""))
}
