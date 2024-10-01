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

    let indx = s.find(char);
    if indx >= 0 {
        // Starting from a known character char="d" within the string and of m length;
        println!("{}", &s[indx..indx + m]);
    }

    let indx = s.rfind(chars);
    if indx >= 0 {
        // Starting from a known substring chars="cd" within the string and of m length.
        println!("{}", &s[indx..indx + m]);
    }
}
