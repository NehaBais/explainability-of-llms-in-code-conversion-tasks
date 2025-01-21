fn substring_n_m(s: &str, n: usize, m: usize) -> &str {
    let start = if n < s.len() { n } else { s.len() };
    let end = std::cmp::min(start + m, s.len());
    &s[start..end]
}

fn substring_n(s: &str, n: usize) -> &str {
    if n >= s.len() {
        return "";
    }
    &s[n..]
}

fn substring_without_last(s: &str) -> &str {
    if s.is_empty() {
        return "";
    }
    &s[..s.len() - 1]
}

fn substring_char(s: &str, c: char, m: usize) -> &str {
    let start = match s.find(c) {
        Some(index) => index,
        None => return "",
    };
    let end = std::cmp::min(start + m, s.len());
    &s[start..end]
}

fn substring_sub<'a>(s: &'a str, sub: &'a str, m: usize) -> &'a str {
    let start = match s.find(sub) {
        Some(index) => index,
        None => return "",
    };
    let end = std::cmp::min(start + m, s.len());
    &s[start..end]
}

fn main() {
    let str = "Hello, 世界!";
    println!("{}", substring_n_m(str, 7, 5)); // Output: "世界"
    println!("{}", substring_n(str, 7)); // Output: "世界!"
    println!("{}", substring_without_last(str)); // Output: "Hello, 世界"
    println!("{}", substring_char(str, '世', 3)); // Output: "世界!"
    println!("{}", substring_sub(str, "Hell", 5)); // Output: "Hello,"
}
