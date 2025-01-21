use std::slice;
use std::ptr;
use std::str::from_utf8;

unsafe fn substring(s: &[u8], n: usize, m: isize) -> Option<String> {
    if let Some(null_index) = s.iter().position(|&x| x == 0) {
        if null_index < n as usize {
            return None; // string ends before n, so invalid.
        }
    }
    
    let mut adjusted_m: isize = m;
    if adjusted_m < 0 {
        adjusted_m += (s.len() as isize) - n as isize + 1;
    }
    
    let start = n as usize;
    let end = cmp::min((start as isize + adjusted_m) as usize, s.len());
    Some(unsafe { from_utf8(&s[start..end]).unwrap() }) // safe because we trust the input data to be valid UTF-8.
}

fn str_wholeless1(s: &str) -> Option<String> {
    substring(s.as_bytes(), 0, s.len() as isize - 1)
}

fn str_fromch(s: &str, ch: u8, m: usize) -> Option<String> {
    let ch_index = s.as_bytes().iter().position(|&x| x == ch)?;
    substring(&s.as_bytes()[ch_index..], 0, m as isize)
}

fn str_fromstr(s: &str, in: &str, m: usize) -> Option<String> {
    let in_index = s.as_bytes().iter().position(|&x| x == *in.as_bytes().first()?)?;
    substring(&s.as_bytes()[in_index..], 0, m as isize)
}

fn main() {
    let s = "hello world shortest program";
    
    println!("{}", str_wholeless1(s).unwrap());      // get "..." progra".
    println!("{}", str_fromch(s, 'w' as u8, 5).unwrap());   // get "world".
    println!("{}", str_fromstr(s, "ro", 3).unwrap());     // get "rog".
}