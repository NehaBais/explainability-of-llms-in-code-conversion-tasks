Here's the converted code in Rust:
```
use std::io;
fn main() {
 let mut input = String::new();
 println!("Please enter two integers:");
 io::stdin().read_line(&mut input).expect("Failed to read line");
 let tokens: Vec<&str> = input.split(' ').collect();
 if let [a, b] = tokens.as_slice() {
 if let (Ok(a), Ok(b)) = (a.parse(), b.parse()) {
 // test for less-than
 if a < b {
 println!("{} is less than {}", a, b);
 }
 // test for equality
 if a == b {
 println!("{} is equal to {}", a, b);
 }
 // test for greater-than
 if a > b {
 println!("{} is greater than {}", a, b);
 }
 } else {
 println!("Please enter valid integers");
 }
 } else {
 println!("Please enter two integers");
 }
}
```
This code reads two integers from the user and tests for less-than, equality, and greater-than using if statements. It uses the `parse` method to convert the input strings to integers, and handles invalid inputs by displaying an error message.

