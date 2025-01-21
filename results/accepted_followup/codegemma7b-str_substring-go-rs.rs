use std::fmt::println;

fn main() {
    let s = "ABCDEFGH";
    let n, m = 2, 3;

    // Index: 01234567
    println!("Index: {:?}", 0..=7);
    println!("String: {}", s);

    // starting from n characters in and of m length
    println!("Start {}, length {}:    {}", n, m, &s[n..n+m]);

    // starting from n characters in, up to the end of the string
    println!("Start {}, to end:      {}", n, &s[n..]);

    // whole string minus last character
    println!("All but last:         {}", &s[..s.len()-1]);

    // starting from a known character within the string and of m length
    if let Some(dx) = s.find('D') {
        println!("Start 'D', length {}:  {}", m, &s[dx..dx+m]);
    }

    // starting from a known substring within the string and of m length
    if let Some(sx) = s.find("DE") {
        println!("Start \"DE\", length {}: {}", m, &s[sx..sx+m]);
    }
}