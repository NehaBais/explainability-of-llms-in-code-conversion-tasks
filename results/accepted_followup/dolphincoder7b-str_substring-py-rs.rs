use std::str;

fn main() {
    let s = "abcdefgh";
    let n = 2;
    let m = 3;
    let char = 'd';
    let chars = "cd";

    // Starting from n characters in and m length.
    println!("{}", &s[n - 1..n + m]);

    // Starting from n characters in, up to the end of the string.
    println!("{}", &s[n..]);

    // Whole string minus last character.
    println!("{}", &s[..s.len() - 1]);

    // Indexing by slices or byte offsets.
    println!("{}", s.chars().nth(n - 1).unwrap());
    println!("{}", str::from_utf8(&s.as_bytes()[..]).unwrap());
}
