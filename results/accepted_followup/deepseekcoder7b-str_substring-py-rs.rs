extern crate unicode_segmentation;
use unicode_segmentation::UnicodeSegmentation;

fn main() {
    let s = "abcdefgh";
    let n = 2;
    let m = 3;
    let char = 'd';
    let chars = "cd";
    
    // starting from n=2 characters in and of m length;
    println!("{}", &s[n-1..n+m-1]);
    
    // starting from n characters in, up to the end of the string;
    println!("{}", &s[n-1..]);

    // whole string minus last character;
    let s_without_last = &s[0..s.len()-1];
    println!("{}", s_without_last);
    
    // starting from a known character char="d" within the string;
    match s.find(char) {
        Some(index) => println!-- "{}", &s[index..],
        None => println!-- "Character not found in string",
    };
    
    // starting from a known substring chars="cd" within the string;
    match s.find(chars) {
        Some(index) => println!-- "{}", &s[index..],
        None => println!-- "Substring not found in string",
    };
}