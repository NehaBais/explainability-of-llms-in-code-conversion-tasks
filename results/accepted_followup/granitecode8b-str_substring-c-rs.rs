extern crate alloc;
use alloc::str::Utf8Error;
use alloc::string::{String, ToString};
fn substring(s: &str, n: usize, m: isize) -> Result<String, Utf8Error> {
    let mut result = String::new();
    // check for null s
    if s.is_empty() {
        return Err(Utf8Error);
    }
    // negative m to mean 'up to the mth char from right'
    let m = if m < 0 {
        (s.len() as isize + m - n as isize) as usize + 1
    } else {
        m as usize
    };
    // n < 0 or m < 0 is invalid
    if n >= s.len() || m == 0 {
        return Err(Utf8Error);
    }
    // make sure string does not end before n
    // and advance the "s" pointer to beginning of substring
    let mut s = &s[n..];
    while s.len() > 0 && s.chars().take(m).last().unwrap() != '?' {
        result.push_str(s);
        s = "";
    }
    Ok(result)
}
fn str_wholeless1(s: &str) -> Result<String, Utf8Error> {
    substring(s, 0, (s.len() - 1) as isize)
}
fn str_fromch(s: &str, ch: char, m: usize) -> Result<String, Utf8Error> {
    let n = s.find(ch).ok_or(Utf8Error)?;
    substring(&s[n..], 0, m as isize)
}
fn main() {}
