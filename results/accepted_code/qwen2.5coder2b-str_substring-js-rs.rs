fn main() {
    let str = "abcdefgh";

    let n = 2;
    let m = 3;

    //  *  starting from n characters in and of m length;
    println!("{}", str.substr(n, m));  // => "cde"

    //  * starting from n characters in, up to the end of the string;
    println!("{}", str.substr(n));  // => "cdefgh"
    println!("{}", str.substring(n));  // => "cdefgh"

    //  * whole string minus last character;
    println!("{}", str.substring(0, str.len() - 1));  // => "abcdefg"

    //  * starting from a known character within the string and of m length;
    let index_b = str.find('b').unwrap();
    println!("{}", str.substr(index_b, m));  // => "bcd"

    //  * starting from a known substring within the string and of m length. 
    let index_bc = str.find("bc").unwrap();
    println!("{}", str.substr(index_bc, m));  // => "bcd"
}