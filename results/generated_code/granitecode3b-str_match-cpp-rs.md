Here's the equivalent Rust code for the given requirements:
```
let s1 = "abcd";
let s2 = "abab";
let s3 = "ab";
// Beginning
println!("{}", s1.starts_with(s3));
// End
println!("{}", s1.ends_with(s3));
// Anywhere
println!("{}", s1.contains(s2));
println!("{}", s1.find(s2).unwrap());
```
The `starts_with` method checks if the first string starts with the second string, and returns a boolean value. The `ends_with` method checks if the first string ends with the second string, and returns a boolean value. The `contains` method checks if the first string contains the second string at any location, and returns a boolean value. The `find` method returns the index of the first occurrence of the second string in the first string, or `None` if it's not found.

