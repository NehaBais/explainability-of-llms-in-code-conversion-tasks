fn main() {
    let str = "abcdefgh";

    let n = 2;
    let m = 3;

    // starting from n characters in and of m length
    println!("{}", &str[n..n + m]); // => cde

    // starting from n characters in up to the end of string
    println!("{}", &str[n..]); // => "cdefgh"

    // whole string minus last character
    let len = str.len();
    println!("{}", &str[0..len - 1]); // => "abcdefg"

    // starting from a known character within the string and of m length
    if let Some(index) = str.find('b') {
        let sub_string = &str[index..];
        println!("{}", &sub_string[0..m]); // => "bcd"
    }

    // starting from a known substring within the string and of m length
    if let Some(index) = str.find("bc") {
        let sub_string = &str[index..];
        println!("{}", &sub_string[0..m]); // => "bcd"
    }
}
