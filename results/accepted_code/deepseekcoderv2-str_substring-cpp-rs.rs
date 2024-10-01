fn main() {
    let string = String::from("0123456789");
    // substrings starting from n characters in and of m length
    println!("{:?}", &string[n..m + n]);
    // substrings starting from n characters in, up to the end of the string
    println!("{:?}", &string[n..]);
    // whole string minus the last character
    let s = string.clone();
    println!("{}", &s[0..s.len() - 1]);
    // starting from a known character within the string and of m length
    println!("{:?}", &string[&c as usize..m + &c as usize]);
    //starting from a known substring within the string and of m length
    let index = sub
        .as_bytes()
        .iter()
        .position(|a| *a == sub.as_bytes()[0])
        .unwrap();
    println!("{:?}", &string[index..m + index as usize]);
}
