use std::str;
fn main() {
    let s = "0123456789";

    let n: usize = 3;
    let m: usize = 4;
    let c: char = '2';
    let sub: &str = "456";

    println!("{}", s.get(n..(n + m)).unwrap_or("")); // Substring from n to n+m
    println!("{}", s.get(n..).unwrap_or("")); // Substring from n to end of string
    println!("{}", s.get(..s.len() - 1).unwrap_or("")); // Whole string minus the last character

    let pos = s.find(c);
    if let Some(pos) = pos {
        println!("{}", s.get((pos..pos + m)).unwrap_or("")); // Substring starting from known character
    } else {
        println!("{} not found", c);
    }

    let pos = s.find(sub);
    if let Some(pos) = pos {
        println!("{}", s.get((pos..pos + m)).unwrap_or("")); // Substring starting from known substring
    } else {
        println!("{} not found", sub);
    }
}
