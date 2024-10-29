fn main() {
    let str_ = "abcdefgh";
    let n = 2;
    let m = 3;

    // starting from n characters in and of m length;
    println!("{}", &str_[n..n + m]); // => "cde"

    // starting from n characters in, up to the end of the string;
    println!("{}", &str_[n..]); // => "cdefgh"

    // whole string minus last character;
    println!("{}", &str_[0..str_.len() - 1]); // => "abcdefg"

    // starting from a known character within the string and of m length.
    match str_.find('b') {
        Some(idx) if idx as usize + m <= str_.len() => println!("{}", &str_[idx + 1..idx + m + 1]), // => "bcd"
        _ => (),
    };

    // starting from a known substring within the string and of m length.
    match str_.find("bc") {
        Some(idx) if idx as usize + m <= str_.len() => println!("{}", &str_[idx + 2..idx + m + 2]), // => "cde"
        _ => (),
    };
}
