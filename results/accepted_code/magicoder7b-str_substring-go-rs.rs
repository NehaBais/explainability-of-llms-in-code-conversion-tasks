use std::slice;
use std::str;

fn main() {
    let s = "ABCDEFGH";
    let n = 2;
    let m = 3;

    // for reference
    println!("Index: {:?}", (0..8).collect::<Vec<_>>());
    println!("String: {}", s);

    let index = str::slice(s, n, n + m);
    println!("Start {}: {:?}, length {}: {}", n, n, m, index.to_string());

    let end = str::slice(s, n..);
    println!("Start {}: {:?}, up to the end: {}", n, n, end.to_string());

    let all_but_last = &s[..s.len() - 1];
    println!("All but last: {:?}", all_but_last);

    let dx = s[..s.len()].find('D').unwrap();
    let indexx = str::slice(s, dx, dx + m);
    println!("Start 'D', length {}: {}", m, indexx.to_string());

    let sx = s[..s.len()].find("DE").unwrap();
    let indexxx = str::slice(s, sx, sx + m);
    println!("Start \"DE\", length {}: {}", m, indexxx.to_string());
}
