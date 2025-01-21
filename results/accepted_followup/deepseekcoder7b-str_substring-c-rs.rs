use unicode_scalar::UnicodeScalar;
use unicode_segmentation::UnicodeSegmentation;
extern crate unicode_scalar;
extern crate unicode_segmentation;

fn str_substring(s: &str, n: isize) -> Option<String> {
    let m = s.graphemes(true).nth((n as usize).. ).map(|g| g.len()).unwrap_or(0);
    if (n as usize) > s.len() || n < 0{ return None;}
    else {return Some(s[((n as usize)..((n+m) as usize)).to_string());}}
}