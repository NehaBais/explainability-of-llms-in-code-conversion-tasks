use std::slice;
use std::cmp;
use std::ptr;
use std::str::from_utf8;

// Create a new string from a byte slice.
unsafe fn substring(s: &[u8], n: usize, m: isize) -> Option<String> {
    // Check for null s.
    if let Some(null_index) = s.iter().position(|b| *b == 0) {
        if null_index < n as usize {
            return None; // string ends before n, so invalid.
        }
    }
    
    // If m is negative, adjust it to mean "up to the mth char from right"
    let mut adjusted_m = m;
    if adjusted_m < 0 {
        adjusted_m += (s.len() as isize) - n + 1;
    }
    
    // If n or m are invalid, return None.
    if n >= s.len() || adjusted_m >= s.len() as isize {
        return None;
    }
    
    let start = n as usize;
    let end = cmp::min((start as isize + adjusted_m) as usize, s.len());
    Some(unsafe { from_utf8(&s[start..end]).unwrap() }) // unsafe because we trust the input data to be valid UTF-8.
}

// Get a substring from the beginning of the string and to the last character but without the last one.
fn str_wholeless1(s: &str) -> Option<String> {
    substring(s.as_bytes(), 0, s.len() as isize - 1)
}

// Get a substring from the given character in the string to m length.
fn str_fromch(s: &str, ch: u8, m: usize) -> Option<String> {
    let ch_index = s.as_bytes().iter().position(|&x| x == ch)?;
    substring(&s.as_bytes()[ch_index..], 0, m as isize)
}

// Get a substring from the given string in the string to m length.
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