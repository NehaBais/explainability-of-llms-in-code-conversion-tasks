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
    
    // starting from a known character char="d" within the string and of m length;
    let indx = match s.find(char) {
        Some(index) => index,
        None => panic!("Character not found"),
    };
    println!("{}", &s[indx..indx+m]);
    
    // starting from a known substring chars="cd" within the string and of m length. 
    let indx = match s.find(chars) {
        Some(index) => index,<｜begin▁of▁sentence｜>:(.*)
        None => panic!("Character not found"),
    };
    println!("{}", &s[indx..indx+m]);
}