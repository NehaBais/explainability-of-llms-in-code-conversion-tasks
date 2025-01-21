fn substring(s: &str, n: usize) -> &str {
    s.get(n..).unwrap_or("")
}

fn substring(s: &str, n: usize, m: usize) -> &str {
    s.get(n..n + m).unwrap_or("")
}

fn substring(s: &str) -> &str {
    s.get(..s.len() - 1).unwrap_or("")
}

fn substring(s: &str, c: char, m: usize) -> &str {
    if let Some(i) = s.chars().position(|&c| c == c) {
        s.get(i..i + m).unwrap_or("")
    } else {
        ""
    }
}

fn substring(s: &str, sub: &str, m: usize) -> &str {
    if let Some(i) = s.find(sub) {
        s.get(i..i + m).unwrap_or("")
    } else {
        ""
    }
}
