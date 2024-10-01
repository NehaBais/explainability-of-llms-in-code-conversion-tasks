I'm sorry for the confusion, but Rust does not support methods like String::startsWith or String::endsWith. If you want to check whether a string starts with another one or ends with another one, you would need to use other functions like str.starts_with(sub) and str.ends_with(suffix).

Here is the equivalent code in Rust:
```rust
let text = "abcd";
println!("{}", text.starts_with("ab"));  // returns true
println!("{}", text.ends_with("zn"));  // returns false
println!("{}", text.contains("bb"));  // returns false
println!("{}", text.contains("ab"));  // returns true
println!("{}", match text.find("bb") {
    Some(loc) => loc,
    None => -1,
});
println!("{}", match text.find("ab") {
    Some(loc) => loc,
    None => -1,
});
println!("{}", match text.find("ab", 0+1) {
    Some(loc) => loc,
    None => -1,
});
```
Note: This Rust code assumes that "zn" is not in the given string. If "zn" is indeed in the string, this will return an error because Rust does not support mutating strings like Java.
