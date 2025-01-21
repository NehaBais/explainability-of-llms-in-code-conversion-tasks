fn main() {
    let s = String::from("0123456789");

    let n = 3;
    let m = 4;
    let c = '2';
    let sub = "456";

    // Starting from n characters in and of m length
    println!("{}", &s[n..n + m]);

    // Starting from n characters in, up to the end of the string
    println!("{}", &s[n..]);

    // Whole string minus the last character
    println!("{}", &s[..s.len() - 1]);

    // Starting from a known character within the string and of m length
    if let Some(pos) = s.find(c) {
        println!("{}", &s[pos..pos + m]);
    }

    // Starting from a known substring within the string and of m length
    if let Some(pos) = s.find(sub) {
        println!("{}", &s[pos..pos + m]);
    }
}