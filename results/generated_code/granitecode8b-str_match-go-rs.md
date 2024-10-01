Here is the converted code from Golang to Rust:
```
fn match(first: &str, second: &str) {
 println!("1. {} starts with {}: {}", first, second, first.starts_with(second));
 let mut i = first.find(second).unwrap_or(-1);
 println!("2. {} contains {}: {}", first, second, i >= 0);
 if i >= 0 {
 println!("2.1. at location {}", i);
 for start in (i+1..first.len()).step_by(second.len()) {
 i = first[start..].find(second).unwrap_or(-1);
 if i < 0 {
 break;
 }
 println!("2.2. at location {}", start + i);
 }
 println!("2.2. and that's all");
 }
 println!("3. {} ends with {}: {}", first, second, first.ends_with(second));
}
fn main() {
 match("abracadabra", "abr");
}
```
The code uses Rust's built-in string methods to perform the three types of string matching. The `match` function takes two string arguments and prints the results for each type of matching. 
For part 2, the code uses a loop to search for all occurrences of the second string within the first string starting from the index after the previous match. It prints the location of each occurrence as it is found. 
The optional requirement of handling multiple occurrences of a string for part 2 is achieved by using the `find` method to search for the next occurrence of the second string after each match is found. The loop continues until no more occurrences are found.

