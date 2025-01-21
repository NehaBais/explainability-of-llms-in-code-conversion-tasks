fn main() {
    let s = String::from("ABCDEFGH");
    let n: usize = 2;
    let m: usize = 3;

    // for reference
    println!("Index: {:?}", "01234567".chars().enumerate());
    println!("String: {}", s);
    // starting from n characters in and of m length
    println!("Start {}, length {}:    {}", n, m, &s[n..n + m]);
    // starting from n characters in, up to the end of the string
    println!("Start {}, to end:      {}", n, &s[n..]);
    // whole string minus last character
    println!("All but last:         {}", &s[..=s.len() - 2]);
    // starting from a known character within the string and of m length
    let dx = s.find('D').unwrap();
    println!("Start 'D', length {}:  {}", m, &s[dx..dx + m]);
    // starting from a known substring within the string and of m length
    let sx = s.find("DE").unwrap();
    println!(r#"Start "DE", length {}: #{}", m, &s[sx..sx+m])"#);
}
