extern crate unicode_segmentation;

use std::char;
use unicode_segmentation::UnicodeSegmentation;

fn substring(str: &str, n: usize, m: Option<usize>) -> String {
    let mut iter = str.graphemes(true).skip(n);
    match m {
        Some(m) => iter.take(m).collect(),
        None => iter.collect(),
    }
}

fn main() {
    let str = "abcdefgh";

    println!("{}", substring(str, 2, Some(3))); // cde

    println!("{}", substring(str, 2, None)); // cdefgh

    println!("{}", substring(str, 0, Some(str.len() - 1))); // abcdefg

    for c in 'b'..'d' {
        println!(
            "{}",
            substring(&str[str.find(c).unwrap_or(0)..], 0, Some(3))
        ); // bcd
    }
}
