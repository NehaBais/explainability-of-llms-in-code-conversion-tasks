fn main() {
    let s = "ABCDEFGH";
    let n = 2;
    let m = 3;

    // for reference
    println!("Index: 01234567");
    println!("String: {}", s);

    // starting from n characters in and of m length
    if n + m <= s.len() {
        println!("Start {}, length {}: {}", n, m, &s[n..n+m]);
    } else {
        println!("Invalid range");
    }

    // starting from n characters in, up to the end of the string
    println!("Start {}, to end: {}", n, &s[n..]);

    // whole string minus last character
    println!("All but last: {}", &s[..s.len()-1]);

    let dx = s.find('D');
    if let Some(dx) = dx {
        if dx + m <= s.len() {
            println!("Start 'D', length {}: {}", m, &s[dx..dx+m]);
        } else {
            println!("Invalid range");
        }
    }

    let sx = s.find("DE");
    if let Some(sx) = sx {
        if sx + m <= s.len() {
            println!("Start \"DE\", length {}: {}", m, &s[sx..sx+m]);
        } else {
            println!("Invalid range");
        }
    }
}