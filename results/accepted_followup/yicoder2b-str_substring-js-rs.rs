fn substr(s: &str, n: usize, m: usize) -> Option<String> {
    if s.len() < n + m {
        return None;
    }
    let start = &s[n..n+m];
    Some(start.to_string())
}

fn main() {
    match substr("Hello, world!", 9, 3) {
        Some(str) => println!("Substring: {}", str),
        None => println!("Substring not found"),
    }
}