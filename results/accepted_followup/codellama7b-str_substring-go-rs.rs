use std::fmt;
use std::str;

fn main() {
    let s = "ABCDEFGH";
    let n = 2;
    let m = 3;

    // Starting from n characters in and of m length
    println!("Start {} length {}", &s[n..(n + m)], m);

    // Starting from n characters in, up to the end of the string
    println!("Start {}", &s[n..]);

    // Whole string minus last character
    println!("All but last", &s[0..len - 1]);

    // Using `str` module functions correctly
    let dx = str::index_of(s, 'D');
    let sx = str::find(s, "DE");

    println!("Start 'D', length {}", dx);
    println!("Start \"DE\", length {}", sx);
}
