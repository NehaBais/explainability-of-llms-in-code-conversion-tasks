The error is due to the use of `let` for declaring global variables, which is not allowed in Rust. Instead, we need to use `const` or `static` to declare global variables.

Here's the corrected code:
```rust
const s1 = "abcd";
const s2 = "ab";
if s1.starts_with(s2) {
    println!("{} starts with {}", s1, s2);
} else {
    println!("{} does not start with {}", s1, s2);
}
const s1 = "abab";
const s2 = "bb";
if s1.contains(s2) {
    println!("{} contains {}", s1, s2);
} else {
    println!("{} does not contain {}", s1, s2);
}
const s1 = "abcd";
const s2 = "zn";
if s1.ends_with(s2) {
    println!("{} ends with {}", s1, s2);
} else {
    println!("{} does not end with {}", s1, s2);
}
const s1 = "abab";
const s2 = "bb";
if let Some(index) = s1.find(s2) {
    println!("{} contains {} at index {}", s1, s2, index);
} else {
    println!("{} does not contain {}", s1, s2);
}
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
