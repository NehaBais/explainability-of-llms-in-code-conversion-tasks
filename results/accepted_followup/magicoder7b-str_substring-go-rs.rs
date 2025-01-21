fn main() {
    let s = "ABCDEFGH";
    let n = 2;
    let m = 3;

    println!("Index: {:?}", (0..8).collect::<Vec<_>>());
    println!("String: {}", s);

    let index = &s[n..n + m];
    println!("Start {}: {}, length {}: {}", n, n, m, index);

    let end = &s[n..];
    println!("Start {}: up to the end: {:?}", n, end);

    let all_but_last = &s[..s.len() - 1];
    println!("All but last: {:?}", all_but_last);

    if let Some(dx) = s[..s.len()].find('D') {
        let indexx = &s[dx..dx + m];
        println!("Start 'D', length {}: {}", m, indexx);
    }

    if let Some(sx) = s[..s.len()].find("DE") {
        let indexxx = &s[sx..sx + m];
        println!("Start \"DE\", length {}: {}", m, indexxx);
    }
}
