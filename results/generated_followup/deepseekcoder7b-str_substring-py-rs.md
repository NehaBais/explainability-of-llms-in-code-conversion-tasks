The error message indicates that there are some syntax issues with Rust code provided, especially related to unicode_segmentation crate which is not found or used incorrectly. 

For example, in this line of the original Rust code `println!("{}", &s[indx..indx+m]);`, it seems like there might be an attempt to add integer value m directly into range (which would lead to index out of bounds error if not handled properly). 

The fix for these syntax errors are as follows:
- Add `extern crate unicode_segmentation;` at the top of your Rust code. This line imports the required `unicode_segmentation` crate which provides functionality to handle Unicode strings in a way similar to Python. 

Corrected version of the provided code would look like this:

```rs
extern crate unicode_segmentation;
use unicode_segmentation::UnicodeSegmentation;

fn main() {
    let s = "abcdefgh";
    let n = 2;
    let m = 3;
    let char = 'd';
    let chars = "cd";
    
    // starting from n=2 characters in and of m length;
    println!("{}", &s[n-1..n+m-1]);
    
    // starting from n characters in, up to the end of the string;
    println!("{}", &s[n-1..]);

    // whole string minus last character;
    let s_without_last = &s[0..s.len()-1];
    println!("{}", s_without_last);
    
    // starting from a known character char="d" within the string;
    match s.find(char) {
        Some(index) => println!-- "{}", &s[index..],
        None => println!-- "Character not found in string",
    };
    
    // starting from a known substring chars="cd" within the string;
    match s.find(chars) {
        Some(index) => println!-- "{}", &s[index..],
        None => println!-- "Substring not found in string",
    };
}
``` 
The `find()` method of String type returns an Option that is either Some with the index or None if it doesn't exist. This allows us to handle cases when character/substring does not exist within the string using a match statement. For substrings we can use same pattern as above and for characters, we print all remaining characters from found index till end of string (`&s[index..]`).

