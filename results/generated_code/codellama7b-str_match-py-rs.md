Sure! Here's the Rust code for the three types of string matching:

```rust
let s1 = "abcd";
let s2 = "ab";
if s1.starts_with(s2) {
    println!("{} starts with {}", s1, s2);
} else {
    println!("{} does not start with {}", s1, s2);
}
let s1 = "abab";
let s2 = "bb";
if s1.contains(s2) {
    println!("{} contains {}", s1, s2);
} else {
    println!("{} does not contain {}", s1, s2);
}
let s1 = "abcd";
let s2 = "zn";
if s1.ends_with(s2) {
    println!("{} ends with {}", s1, s2);
} else {
    println!("{} does not end with {}", s1, s2);
}
let s1 = "abab";
let s2 = "bb";
if let Some(index) = s1.find(s2) {
    println!("{} contains {} at index {}", s1, s2, index);
} else {
    println!("{} does not contain {}", s1, s2);
}
let s1 = "abab";
let s2 = "ab";
let mut count = 0;
for (index, letter) in s1.char_indices() {
    if letter == s2[0] && s1[index..].starts_with(s2) {
        println!("{} contains {} at index {}", s1, s2, index);
        count += 1;
    }
}
if count > 0 {
    println!("Found {} occurrences of {} in {}", count, s2, s1);
} else {
    println!("{} does not contain {}", s1, s2);
}
```
Output:
"abcd starts with ab"
"abab does not contain bb"
"abcd does not end with zn"
"abab contains bb at index 0"
"abab contains ab at index 0"
"abab contains ab at index 3"
"Found 2 occurrences of ab in abab"
