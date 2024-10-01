fn main() {
    let s = "abcdefgh";
    let n = 2;
    let m = 3;
    let chars: &str = "d";
    let charss: &str = "cd";
    // starting from n=2 characters in and m=3 in length;
    println!("{}", substring(&s[n - 1..], m));
    // starting from n characters in, up to the end of the string;
    println!("{}", s[n - 1..]);
    // whole string minus last character;
    let last_char = if let Some((fst, rest)) = s.split_at(s.len() - 1) {
        fst
    } else {
        ""
    };
    println!("{}", last_char);
    // starting from a known character char="d" within the string and of m length;
    if let Some(&idx) = s.find(chars) {
        println!("{}", substring(&s[idx..], m));
    }
    // starting from a known substring chars="cd" within the string and of m length.
    if let Some(&indx) = s.find(charss) {
        println!("{}", substring(&s[indx..], m));
    }
}

fn substring(s: &str, n: usize) -> Option<&str> {
    let char_indices = s.char_indices();
    if let Some((_, start)) = char_indices.nth(n) {
        return Some(&s[0..start]);
    } else {
        None
    }
}
