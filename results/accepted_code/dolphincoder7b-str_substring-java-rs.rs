fn substring(str: &str, n: usize, m: Option<usize>) -> String {
    match m {
        Some(m) => str[n..(n + m)].to_string(),
        None => str.chars().skip(n).collect::<String>(),
    }
}
fn substring(str: &str, n: usize) -> String {
    str.chars().skip(n).collect::<String>()
}
fn substring(str: &str) -> String {
    match str.len() {
        0 => "".to_string(),
        _ => str[..str.len() - 1].to_string(),
    }
}
fn substring(str: &str, c: char, m: Option<usize>) -> String {
    match (c as u32).utf8().size_hint() {
        (_, Some(m)) if (n + m) < str.len() => str[n..(n + m)].to_string(),
        _ => "".to_string(),
    }
}
fn substring(str: &str, sub: &str, m: Option<usize>) -> String {
    match (sub as u32).utf8().size_hint() {
        (_, Some(m)) if (n + m) < str.len() => str[n..(n + m)].to_string(),
        _ => "".to_string(),
    }
}
