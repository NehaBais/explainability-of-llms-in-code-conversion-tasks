fn main() {
    let mut s = String::from("0123456789");

    let n = 3;
    let m = 4;
    let c = '2';
    let sub = String::from("456");

    println!("{}", &s[n..m + n]);
    println!("{}", &s[n..]);
    println!("{}", &s[..s.len() - 1]);
    println!("{}", &s[s.find(c).unwrap()..m + s.find(c).unwrap()]);
    println!("{}", &s[s.find(&sub).unwrap()..m + s.find(&sub).unwrap()]);
}
