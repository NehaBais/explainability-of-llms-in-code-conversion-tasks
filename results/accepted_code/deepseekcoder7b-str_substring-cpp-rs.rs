fn main() {
    let s = "0123456789";

    let n = 3;
    let m = 4;
    let c = '2';
    let sub = "456";

    println!("{}", &s[n..n + m]);
    println!("{}", &s[n..]);
    println!("{}", &s[0..(s.len() - 1)]);
    println!("{}", &s[s.find(c).unwrap()..(s.find(c).unwrap() + m)]);
    println!("{}", &s[s.find(sub).unwrap()..(s.find(sub).unwrap() + m)]);
}
