fn substring(s: &str, n: usize, m: ptrdiff_t) -> Option<String> {
    let mut result = String::from("");
    if let Some(ch) = s.chars().nth(n as usize) {
        result += ch;
        if (m >= 0 && m < result.len()) || (m < 0 && s.len() + m - n <= result.len()) {
            return Some(result);
        }
    } else if n > s.len() {
        return None;
    }
    let mut temp_s = String::from("");
    for _ in 0..(s.len() - n) as usize {
        if let Some(_ch) = s.chars().next() {
            temp_s += _ch.unwrap();
        } else {
            break;
        }
    }
    result += &temp_s[0..m as usize];
    if result.len() > m && (m < 0 || m >= result.len()) {
        return Some(result);
    } else {
        None
    }
}

fn main() {
    let s = "hello world shortest program";
    println!(
        "{:?}",
        substring(s, 12, 5).unwrap_or(String::from("--error--"))
    ); // get "short"
    println!(
        "{:?}",
        substring(&s[6..], 0, -1).unwrap_or(String::from("--error--"))
    ); // get "world shortest program"
    println!(
        "{:?}",
        substring(s, s.len(), 5).unwrap_or(String::from("--error--"))
    ); // "... progra"
    println!(
        "{:?}",
        substring(&s[23..], str::find(&s, &*'w').unwrap() as usize, 5)
            .unwrap_or(String::from("--error--"))
    ); // "world"
    println!(
        "{:?}",
        substring(s, str::find(&s, &*"ro").unwrap() as usize, -3)
            .unwrap_or(String::from("--error--"))
    ); // "rog"
}
