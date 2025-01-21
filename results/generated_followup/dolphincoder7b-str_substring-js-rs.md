The error occurs because Rust doesn't have a built-in function to emulate JavaScript's `substring` method directly. However, it has its own methods for string slicing that can be used instead. In this case, we need to use the following methods:

- `substr` and `slice`: To extract substrings from a string based on start and end indexes. These are not supported in Rust, but you can use them with the help of the `str` trait.
- `find`: To find the index of a specific character or substring within a string.

Here's the corrected code:

```rust
fn main() {
    let str  =  "abcdefgh";

     // Starting from n characters in and of m length;
    println!("{}", &str[2..5]);  // =>  cde

     // Starting from n characters in, up to the end of the string;
    println!("{}",  &str[2..]);  //  =>  cdefgh
     // Whole string minus last character;
    println!("{}", &str[..str.len() - 1]);  // =>  abcdefg

     // Starting from a known character within the string and of m length;
    let b_index = str.find('b').unwrap();  // find index of 'b' in the string
    println!("{}", &str[b_index..b_index + 3]);  //  =>  bcd

     // Starting from a known substring within the string and of m length;
    let bc_index = str.find("bc").unwrap();  // find index of "bc" in the string
    println!("{}", &str[bc_index..bc_index + 3]);  //  =>  bcd
}
```

In this code, we use the `find` method to find the indexes of the characters or substrings within the string. We then use these indexes to slice the original string using `&str[start_index..end_index]` or `&str[start_index..]`. 

This is an important distinction because JavaScript and Rust have different ideas about strings and character encoding. In JavaScript, a string can contain any valid Unicode character, including characters from the Basic Multilingual Plane (BMP). While in Rust, a string is stored as a sequence of 8-bit code units or 16-bit code units depending on the encoding used. These code points are considered logical characters for Unicode purposes, but they are not considered valid characters within the BMP. Therefore, `find` will return an index that corresponds to a different character in JavaScript compared to Rust. However, this discrepancy can be easily handled by taking into account the length of the string, which is 8 bytes long in UTF-8 and 2 bytes long in UTF-16.
