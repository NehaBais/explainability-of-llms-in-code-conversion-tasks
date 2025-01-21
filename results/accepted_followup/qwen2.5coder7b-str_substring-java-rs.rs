fn substring(s: &str, n: usize, m: Option<usize>) -> String {
    let mut chars = s.chars().skip(n);
    if let Some(m) = m {
        chars.take(m).collect()
    } else {
        chars.collect()
    }
}

fn substring_from_char(s: &str, c: char, m: usize) -> String {
    let pos = s.find(c).unwrap_or(0);
    let mut chars = s.chars().skip(pos + 1);
    chars.take(m).collect()
}

fn substring_from_substring(s: &str, sub: &str, m: usize) -> String {
    let pos = s.find(sub).unwrap_or(0);
    let mut chars = s.chars().skip(pos + sub.len());
    chars.take(m).collect()
}

fn main() {
    println!("{}", substring("Hello, 世界!", 7, Some(6))); // "世界!"
    println!("{}", substring("Hello, 世界!", 0, None)); // "Hello, 世界!"
    println!("{}", substring("Hello, 世界!", 0, Some(5))); // "Hello"
    println!("{}", substring_from_char("Hello, 世界!", 'o', 4)); // ", 世"
    println!("{}", substring_from_substring("Hello, 世界!", ", 世", 3)); // "界!"
}
