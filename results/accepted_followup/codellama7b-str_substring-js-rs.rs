const str = "abcdefgh";

//  * starting from n characters in and of m length;
str[n..n+m];  // => "cde"

//  * starting from n characters in, up to the end of the string;
str[n..];  // => "cdefgh"
let str_substring = str.substring(n);  // => "cdefgh"

//  * whole string minus last character;
str.substring(0, str.length - 1);  // => "abcdefg"

//  * starting from a known character within the string and of m length;
str[str.indexOf('b')..(n+m)];  // => "bcd"

//  * starting from a known substring within the string and of m length.
let index_bc = str.find("bc");
str[index_bc..(index_bc + m)];  // => "bcd"