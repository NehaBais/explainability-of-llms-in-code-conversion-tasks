use unicode_segmentation::UnicodeSegmentation;

fn main() {
    let s = "abcdefgh";
    let n: usize = 2;
    let m: usize = 3;
    let char = 'd';
    let chars = "cd";

    // starting from n=2 characters in and m=3 in length
    println!("{}", &s[unicode_segmentation::UnicodeStr::new(&s)[n-1..n+m-1].collect::<String>());

    // starting from n characters in, up to the end of the string
    println!("{}", &s[unicode_segmentation::UnicodeStr::new(&s)[n-1..].collect::<String>());

    // whole string minus last character;
    println!("{}", s.trim_end_matches("\u{0}"));

    let mut chars = s.char_indices();
    // starting from a known character char="d" within the string and of m length
    if let Some((pos, _)) = chars.find(|&(_, c)| c == char) {
        print!("{}", &s[pos..pos+m]);
    }

    // starting from a known substring chars="cd" within the string and of m length. 
    if let Some(pos) = s.find(chars) {
        print!("{}", &s[pos..pos+m]);
    }
}