fn main() {
    let str = "abcdefgh";
    
    let n = 2;
    let m = 3;

    // * starting from n characters in and of m length;
    println!("{}", &str[n..(n+m)].to_string());  // => "cde"

    // * starting from n characters in, up to the end of the string;
    println!("{}", &str[n..].to_string());  // => "cdefgh"
    println!("{}", &str[n..str.len()].to_string());  // => "cdefgh"

    // * whole string minus last character;
    println!("{}", &str[0..str.len()-1].to_string());  // => "abcdefg"

    // * starting from a known character within the string and of m length;
    let index = str.find('b').unwrap();
    println!("{}", &str[index..(index+m)].to_string());  // => "bcd"

    // * starting from a known substring within the string and of m length.
    let substr_index = str.find("bc").unwrap();
    println!("{}", &str[substr_index..(substr_index+m)].to_string());  // => "bcd"
}