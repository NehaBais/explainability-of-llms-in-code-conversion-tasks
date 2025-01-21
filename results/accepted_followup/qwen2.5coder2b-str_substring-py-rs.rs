fn main() {
    let s = "abcdefgh";

    // starting from n=2 characters in and m=3 in length;
    println!("{}", &s[s.len() - n + 1..s.len() - n + m]);

    // starting from n characters in, up to the end of the string;
    println!("{}", &s[s.len() - n + 1..]);

    // whole string minus last character;
    println!("{}", &s[..s.len() - 1]);

    // starting from a known character char="d" within the string and of m length;
    let idx = s.find('d').unwrap();
    println!("{}", &s[idx..idx + m]);

    // starting from a known substring chars="cd" within the string and of m length.
    let idx = s.find("cd").unwrap();
    println!("{}", &s[idx..idx + m]);
}
