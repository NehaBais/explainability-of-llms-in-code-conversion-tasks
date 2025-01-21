pub fn substring(s: &str, n: usize, m: usize) -> String {
    let end = if n + m > s.len() {
        s.len()
    } else {
        n + m
    };

    String::from_utf8_lossy(&s.bytes()[n..end].to_vec()))
}