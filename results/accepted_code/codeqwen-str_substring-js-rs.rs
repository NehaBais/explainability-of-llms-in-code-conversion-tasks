use std::str;

fn substring(input: &str, n: usize, m: Option<usize>) -> String {
    let mut chars = input.chars().skip(n);
    match m {
        Some(length) => chars.take(length).collect(),
        None => chars.collect(),
    }
}

fn main() {
    let str = "abcdefgh";
    println!("{}", substring(&str, 2, Some(3))); // => "cde"
    println!("{}", substring(&str, 2, None)); // => "cdefgh"

    if let Some(index) = str.find('b') {
        println!("{}", substring(&str, index, Some(3))); // => "bcd"
    }
}
