use std::cmp;

fn substring(s: &str, n: usize, m: Option<usize>) -> Result<String, &'static str> {
    let s_bytes = s.as_bytes();

    if n > s_bytes.len() {
        return Err("n is out of bounds");
    }

    let start = cmp::min(s_bytes.len(), n);
    let end = match m {
        Some(m) => cmp::min(start + m, s_bytes.len()),
        None => s_bytes.len()
    };

    Ok(String::from_utf8_lossy(&s_bytes[start..end]).into_owned())
}

fn str_wholeless1(s: &str) -> Result<String, &'static str> {
    substring(s, 0, Some(s.len() - 1))
}

fn str_fromch(s: &str, ch: char, m: Option<usize>) -> Result<String, &'static str> {
    let pos = s.find(ch);
    match pos {
        Some(pos) => substring(s, pos, m),
        None => Err("character not found"),
    }
}

fn str_fromstr(s: &str, in: &str, m: Option<usize>) -> Result<String, &'static str> {
    let pos = s.find(In);
    match pos {
        Some(pos) => substring(s, pos, m),
        None => Err("substring not found"),
    }
}

fn main() {
    let s = "hello world shortest program";

    match substring(s, 12, Some(5)) {
        Ok(r) => println!("{}", r),
        Err(e) => println!("--error-- ({})", e),
    }
    match substring(s, 6, None) {
        Ok(r) => println!("{}", r),
        Err(e) => println!("--error-- ({})", e),
    }
    match str_wholeless1(s) {
        Ok(r) => println!("{}", r),
        Err(e) => println!("--error-- ({})", e),
    }
    match str_fromch(s, 'w', Some(5)) {
        Ok(r) => println!("{}", r),
        Err(e) => println!("--error-- ({})", e),
    }
    match str_fromstr(s, "ro", Some(3)) {
        Ok(r) => println!("{}", r),
        Err(e) => println!("--error-- ({})", e),
    }
}