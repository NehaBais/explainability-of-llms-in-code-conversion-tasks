 The Rust language does not have built-in functions for handling UTF-8 and UTF-16 strings directly. Instead, it's often more common to handle these as byte arrays or slices (which are essentially a view into a byte array). However, if you really want the Rust version of the given C code, here is how you can do that:

```rust
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
```
This program will print the substring from the specified string and its related functions. Note that `None` is returned when the input data is invalid or if a requested character/substring isn't found. The `Option<String>` return type means that the function may return `None`, but it also guarantees that we can safely call `.unwrap()` on the result to get the actual string, which would panic if there was no valid result.
