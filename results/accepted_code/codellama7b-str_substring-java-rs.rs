fn substring(str: &str, n: usize, m: usize) -> String {
    return str[n..=m].to_string();
}

fn substring(str: &str, n: usize) -> String {
    return str[n..].to_string();
}

fn substring(str: &str) -> String {
    let last_char = str.chars().last();
    if let Some(last_char) = last_char {
        return str[0..=last_char.len() - 1].to_string();
    } else {
        return "".to_string();
    }
}

fn substring(str: &str, c: char, m: usize) -> String {
    let index = str.find(c).unwrap();
    return str[index..=index + m].to_string();
}

fn substring(str: &str, sub: &str, m: usize) -> String {
    let index = str.find(sub).unwrap();
    return str[index..=index + m].to_string();
}
