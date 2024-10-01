Here is the Rust version of your Python code:

```rust
fn main() {
    let str1 = "abcd";

    println!("{}", str1.starts_with("ab"))); //prints "true"
    println!("{}", str1.ends_with("zn")))); //prints "false"
    println!("{}", str1.contains("bb") )); //prints "false"
    println!("{}", str1.contains("ab")) )); //prints "true"
    let loc = str1.find("bb").unwrap(); // prints "-1" (if no match is found) or an actual location number if a match occurs
    let loc = str1.find("ab"); 
    println!("{}",loc));//prints either "0" for the first occurrence, or "-1" if the string doesn't contain the substring at all
}
```
Please note that this Rust code uses `String` and `str` types. The `starts_with` method is used to check if the first string starts with the second string. The `ends_with` method checks if the first string ends with the second string. The `contains` method is used to check if the first string contains the second string at any location. The `find` method returns an optional `usize` that represents the index of the found substring, or `None` if no match is found.
