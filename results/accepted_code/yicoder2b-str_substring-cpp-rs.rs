fn main() {
    let mut s = String::from("0123456789");

    let n = 3;
    let m = 4;
    let c = '2';
    let sub = "456";

    println!("{}", &s[n..m]);
    println!("{}", &s[n..]);
    println!("{:?}", &s[0..s.len() - 1]);
    if let Some(&i) = s.chars().find(|&ch| ch == c) {
        println!("{}", &s[i..m]);
    }
    if let Some(&start_index) = s.find(*sub) {
        println!("{}{}", &s[start_index..start_index + m as usize]);
    }
}
