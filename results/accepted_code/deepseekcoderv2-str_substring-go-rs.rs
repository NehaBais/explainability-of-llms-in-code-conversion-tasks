fn main() {
    let s = "ABCDEFGH";
    let n = 2;
    let m = 3;

    // for reference
    println!("Index: {}", "01234567");
    println!("String: {}", s);

    // starting from n characters in and of m length
    if n + m <= s.len() {
        let substring = &s[n..n+m];
        println!("Start {}, length {}:    {}", n, m, substring);
    } else {
        println!("Start {}, length {} out of bounds", n, m);
    }

    // starting from n characters in, up to the end of the string
    if n < s.len() {
        let substring = &s[n..];
        println!("Start {}, to end:      {}", n, substring);
    } else {
        println!("Start {} out of bounds", n);
    }

    // whole string minus last character
    if s.len() > 0 {
        let substring = &s[..s.len()-1];
        println!("All but last:         {}", substring);
    } else {
        println!("String is empty");
    }

    // starting from a known character within the string and of m length
    if let Some(dx) = s.find('D') {
        if dx + m <= s.len() {
            let substring = &s[dx..dx+m];
            println!("Start 'D', length {}:  {}", m, substring);
        } else {
            println!("Start 'D' and length {} out of bounds", m);
        }
    } else {
        println!("Character 'D' not found");
    }

    // starting from a known substring within the string and of m length
    if let Some(sx) = s.find("DE") {
        if sx + m <= s.len() {
            let substring = &s[sx..sx+m];
            println!("Start \"DE\", length {}: {}", m, substring);
        } else {
            println!("Start \"DE\" and length {} out of bounds", m);
        }
    } else {
        println!("Substring \"DE\" not found");
    }
}