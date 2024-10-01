fn substr(s: &String, n: usize, m: usize) -> String {
    if s.len() < n + m {
        return "".to_string();
    }
    let start = &s[n..n + m];
    *start
}

fn main() {
    let str = "abcdefgh";
    println!("{:?}", substr(&str, 2, 3)); // => "cde"
    println!("{:?}", substr(&str, 0, str.len())); // => "abcdefgh"
    println!("{:?}", substr(&str, str.find('b').unwrap(), 1)); // => "b"
    println!("{:?}", substr(&str, str.find("bc").unwrap(), 3)); // => "bcd"
}
