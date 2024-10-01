use std::str;
fn main() {
    let s = "ABCDEFGH".to_string();
    let n = 2;
    let m = 3;

    println!("Index: {:0>8}", &s[n - 1 as usize]); // prints '   2345678'
    println!("String: {}", &s);
    println!("Start {}, length {}: {}", n, m, &s[n..n + m]); // prints "Start 2, length 3: ABCDEFGH"
    println!("Start '{}' to end:", s[n - 1 as usize]); // prints "Start 2 to end:", s[:len(&s) - 1])
    let dx = str::from_utf8_lossy(&s)
        .chars()
        .position(|&ch| ch == 'D')
        .unwrap();
    println!("Start 'D', length {}: {}", m, &s[dx as usize..dx + m]); // prints "Start D, length 3: DEF"
    let sx = str::from_utf8_lossy(&s).find("DE").unwrap();
    println!(
        "Start '{}', length {}: {}",
        &str::from_utf8_lossy(&s)[sx as usize..sx + m]
    ); // prints "Start DE, length 3: DEF"
}
