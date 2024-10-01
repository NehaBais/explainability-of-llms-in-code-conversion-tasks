Sure! Here's the converted code in Rust:
```
use std::fmt;
fn match_strings(first: &str, second: &str) {
 println!("1. {} starts with {}: {}", first, second, first.starts_with(second));
 
 let i = first.find(second);
 println!("2. {} contains {}: {},", first, second, i.is_some());
 
 if let Some(i) = i {
 println!("2.1. at location {}", i);
 for start in (i+1).. {
 if let Some(i) = first[start..].find(second) {
 println!("2.2. at location {}", start + i);
 } else {
 break;
 }
 }
 println!("2.2. and that's all");
 }
 
 println!("3. {} ends with {}: {}", first, second, first.ends_with(second));
}
fn main() {
 match_strings("abracadabra", "abr");
}
```
This code is a direct translation of the Golang code into Rust, and it does the same three types of string matching as the original Golang code. The only difference is that Rust has a few more built-in functions for string manipulation, such as `find` and `ends_with`. Additionally, Rust requires semicolons at the end of each statement, while Golang allows them to be omitted in some cases.

