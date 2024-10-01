fn main() {
    let s = "ABCDEFGH";
    let n: usize = 2;
    let m: usize = 3;

    // for reference
    println!("Index: 01234567");
    println!("String: {}", s);

    // starting from n characters in and of m length
    let substring1 = &s[n..n + m];
    println!("Start {} length {}:      {:?}", n, m, substring1);

    // starting from n characters in, up to the end of the string
    let substring2 = &s[n..];
    println!("Start {} to end:        {}", n, substring2);

    // whole string minus last character
    let substring3 = &s[0..s.len() - 1];
    println!("All but last:          {:?}", substring3);

    // starting from a known character within the string and of m length
    if let Some(dx) = s.find('D') {
        let substring4 = &s[dx..dx + m];
        println!("Start 'D' length {}:     {:?}", m, substring4);
    }

    // starting from a known substring within the string and of m length
    if let Some(sx) = s.find("DE") {
        let substring5 = &s[sx..sx + m];
        println!("Start \"DE\" length {}:  {:?}", m, substring5);
    }
}
