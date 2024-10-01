use std::ffi::{CStr, CString};

fn substring(s: &str, n: usize, m: isize) -> Option<String> {
 let n = n.min(s.len());
 if m < 0 {
 Some(s[n as usize..].to_string())
 } else if m == 0 {
 Some(String::new())
 } else {
 Some(s[n..n+m as usize].to_string())
 }
}

fn str_wholeless1(s: &str) -> String {
 substring(s, 0, s.len() - 1).unwrap()
}

fn str_fromch(s: &str, ch: char, m: isize) -> String {
 let ch_idx = s.find(ch).ok_or("--error--")?;
 substring(s, ch_idx as usize, m).unwrap()
}

fn str_fromstr(s: &str, in: &str, m: isize) -> String {
 let idx = s.find(in).ok_or("--error--")?;
 substring(s, idx as usize, m).unwrap()
}


fn main() {
 let s = "hello world shortest program";
 
 println!("{}", str_wholeless1(&s)); // "shortest program"
 println!("{}", str_fromch(&s, 'w', 5)); // "world"
 println!("{}", str_fromstr(&s, "ro", 3)); // "rog"
}