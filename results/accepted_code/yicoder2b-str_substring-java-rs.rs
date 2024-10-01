fn Substring(s: &str, n: usize, m: usize) -> &str {
    if s.is_empty() || n >= s.len() {
        return "";
    }
    &s[n..n + m]
}

fn Substring(s: &str, n: char) -> &str {
    if s.is_empty() {
        return "";
    }
    &s[s.find(&n).unwrap()..]
}

fn Substring(s: &str) -> &str {
    if s.is_empty() || s.len() == 1 {
        return "";
    }
    &s[0..s.len() - 1]
}

fn Substring(s: &str, c: char, m: usize) -> &str {
    if s.is_empty() || s.find(&c) == None {
        return "";
    }
    &s[s.find(&c).unwrap()..s.find(&c) + m + 1]
}

fn Substring(s: &str, sub: &str, m: usize) -> &str {
    if s.is_empty() || !s.contains(sub) {
        return "";
    }
    &s[s.find(*sub).unwrap()..s.rfind(*sub) + m + 1]
}
