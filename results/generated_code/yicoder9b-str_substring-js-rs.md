Here is your requested Rust code:

```rust
fn main() {
    let str = "abcdefgh";

    let n = 2;
    let m = 3;

    // starting from n characters in and of m length
    println!("{}", &str[n..n+m]); // => cde

    // starting from n characters in up to the end of string
    println!("{}", &str[n..]);  // => "cdefgh"

    // whole string minus last character
    let len = str.len();
    println!("{}", &str[0..len-1]); // => "abcdefg"

    // starting from a known character within the string and of m length
    if let Some(index) = str.find('b') {
        let sub_string = &str[index..]; 
        println!("{}", &sub_string[0..m]);  // => "bcd"
    }
    
    // starting from a known substring within the string and of m length
    if let Some(index) = str.find("bc") {
        let sub_string = &str[index..]; 
        println!("{}", &sub_string[0..m]);  // => "bcd"
    }
}
```

Please note that Rust string slicing is based on bytes and not Unicode characters directly. If your input string has multi-byte Unicode characters (like emoji or some Chinese/Japanese/Korean letters), the index may be incorrect when it points to a byte of a multi-byte character. 

To properly handle this in Rust you would need to decode the string into a sequence of Unicode Scalar Values and then index into that, but unfortunately there is no standard way for this right now.
