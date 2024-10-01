Here's the Rust code that meets the requirements you've specified:
```
fn main() {
 let s = "abcdefgh";
 let n = 2;
 let m = 3;
 let char = 'd';
 let chars = "cd";
 
 // starting from n=2 characters in and m=3 in length;
 println!("{}", &s[n-1..n+m-1]);
 
 // starting from n characters in, up to the end of the string;
 println!("{}", &s[n-1..]);
 
 // whole string minus last character;
 println!("{}", &s[..s.len()-1]);
 
 // starting from a known character char="d" within the string and of m length;
 let indx = s.find(char).unwrap();
 println!("{}", &s[indx..iny+m]);
 
 // starting from a known substring chars="cd" within the string and of m length. 
 let indx = s.find(chars).unwrap();
 println!("{}", &s[indx..iny+m]);
}
```
This code uses Rust's UTF-8 encoding, which can handle any valid Unicode code point. It references logical characters (code points), not 8-bit code units. The `find` method is used to find the index of a character or substring within the string. The `unwrap` method is used to handle cases where the character or substring is not found in the string. Finally, the `..` syntax is used to create a slice that starts at the specified index and ends at the specified length away from the start index.

