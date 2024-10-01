Here's the converted code in Rust that demonstrates the three types of string matching you specified:
```rust
let s1 = "abcd";
let s2 = "abab";
let s3 = "ab";
// Beginning
println!("{}", s1.starts_with(s3));
// End
println!("{}", s1.ends_with(s3));
// Anywhere
println!("{}", s1.contains(s2));
```
This code uses the `String` methods `starts_with`, `ends_with`, and `contains` to check for string matching as specified in the requirements. The optional requirement of printing the location of the match for part 2 can be accomplished using the `find` method, which returns the index of the first occurrence of the specified substring in the original string. Here's an example:

let s1 = "abcd";
let s2 = "abab";
let s3 = "ab";
// Anywhere with location printing
let loc = s2.find(s3).unwrap();
println!("Location of match: {}", loc);

This code uses the `find` method to find the index of the first occurrence of `s3` in `s2`, and then prints that location. The `unwrap` method is used to handle the case where the substring is not found, which will return `None`.

