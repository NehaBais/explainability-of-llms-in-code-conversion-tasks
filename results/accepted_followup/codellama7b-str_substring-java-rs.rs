fn substring(str: &str, n: usize, m: usize) -> String {
    return str[n..=m].to_string();
}

fn substring(str: &str, n: usize) -> String {
    return str[n..].to_string();
}

fn whole_string_minus_last_char(str: &str) -> String {
    let last_char = str.chars().nth(str.len() - 1).unwrap();
    return str[0..=last_char.len() - 1].to_string();
}
