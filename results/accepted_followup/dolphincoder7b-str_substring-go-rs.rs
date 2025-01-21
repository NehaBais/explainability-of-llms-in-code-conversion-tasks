use std::io;

fn main() {
    let s = String::from("ABCDEFGH");
    let n = 2; // Starting from position n
    let m = 3; // length of substring

    println!("Index: 01234567");
    println!("String: {}", s);

    // Starting from n characters in and of m length
    println!("Start {} length {}:     {}", n, m, &s[n..n + m]);

    // Starting from n characters in, up to the end of the string
    println!("Start {} to end:       {}", n, &s[n..]);

    // Whole string minus last character
    println!("All but last:         {}", &s[..(&s).len() - 1]);

    // Starting from a known character within the string and of m length
    let dx = s.find('D').unwrap();
    println!("Start 'D', length {}:   {}", m, &s[dx..dx + m]);

    // Starting from a known substring within the string and of m length
    let sx = s.find("DE").unwrap();
    println!("Start \"DE\", length {}:   {}", m, &s[sx..sx + m]);
}
