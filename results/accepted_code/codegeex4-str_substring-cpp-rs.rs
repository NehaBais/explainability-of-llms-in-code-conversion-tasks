fn main() {
    let s = "0123456789";

    let n: usize = 3;
    let m: usize = 4;
    let c = '2';
    let sub = "456";

    println!("{}", &s[n..n + m]);
    println!("{}", &s[n..]);
    println!("{}", &s[0..s.len() - 1]);
    println!("{}", &s[s.find(c).unwrap_or(0)..s.find(c).unwrap_or(0) + m]);
    println!(
        "{}",
        &s[s.find(sub).unwrap_or(0)..s.find(sub).unwrap_or(0) + m]
    );
}
