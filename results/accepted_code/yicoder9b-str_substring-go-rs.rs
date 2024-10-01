fn main() {
    let s = "ABCDEFGH";
    let n = 2;
    let m = 3;

    // starting from n characters in and of m length
    println!("Start {}, length {}:   {}", n, m, &s[n..=n + m - 1]);

    // starting from n characters in, up to the end of the string
    println!("Start {}, to end:     {}", n, &s[n..]);

    // whole string minus last character
    println!("All but last:        {}", &s[0..s.len() - 1]);

    if let Some(dx) = s.find('D') {
        // starting from a known character within the string and of m length
        println!("Start 'D', length {}:  {}", m, &s[dx..=dx + m - 1]);
    }

    if let Some(sx) = s.find("DE") {
        // starting from a known substring within the string and of m length
        println!("Start \"DE\", length {}:{}", m, &s[sx..=sx + m - 1]);
    }
}
