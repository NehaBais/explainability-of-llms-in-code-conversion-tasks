Sure! Here's the Rust equivalent of the code:
```
let str = "abcdefgh";

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
```
Note that in Rust, we use the `.` operator to slice strings, rather than the `substr()` function. We also use the `substring()` method to get a substring of a string, which is equivalent to using `substr()`.

Also note that in Rust, we use the `find()` method to find the index of a substring within a string, and then use that index to slice the string. This is different from JavaScript's `indexOf()` method, which returns the index of the first occurrence of a substring within a string, rather than finding all occurrences of the substring and returning an array of indices.

Finally, in Rust, we use the `..` operator to indicate that we want to extract a range of characters from a string, rather than just a single character or a substring. This is similar to using the `-` operator in JavaScript to subtract one number from another.
