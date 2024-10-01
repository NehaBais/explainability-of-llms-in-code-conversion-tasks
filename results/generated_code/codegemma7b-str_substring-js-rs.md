```rust
let str = "abcdefgh";

let n = 2;
let m = 3;

//  *  starting from n characters in and of m length;
&str[n..n + m];  // => "cde"

//  * starting from n characters in, up to the end of the string;
&str[n..];  // => "cdefgh"
&str[n..str.len()];  // => "cdefgh"

//  * whole string minus last character;
&str[..str.len() - 1];  // => "abcdefg"

//  * starting from a known character within the string and of m length;
&str[str.find('b').unwrap()..str.find('b').unwrap() + m];  // => "bcd"

//  * starting from a known substring within the string and of m length. 
&str[str.find("bc").unwrap()..str.find("bc").unwrap() + m];  // => "bcd"
```
