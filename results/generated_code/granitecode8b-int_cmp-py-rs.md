Here's the Rust code that does what you're asking for:
```rust
use std::io;
 
fn main() {
 let mut input1 = String::new();
 let mut input2 = String::new();
 
 println!("Enter value of a:");
 io::stdin().read_line(&mut input1)
 .expect("Failed to read line");
 let a: i32 = match input1.trim().parse() {
 Ok(num) => num,
 Err(_) => {
 println!("Please enter a valid integer.");
 return;
 }
 };
 
 println!("Enter value of b:");
 io::stdin().read_line(&mut input2)
 .expect("Failed to read line");
 let b: i32 = match input2.trim().parse() {
 Ok(num) => num,
 Err(_) => {
 println!("Please enter a valid integer.");
 return;
 }
 };
 
 if a < b {
 println!("a is less than b");
 } else if a > b {
 println!("a is greater than b");
 } else {
 println!("a is equal to b");
 }
}
```
This code uses the `std::io` module to read input from the user, and the `parse()` method to convert the input strings to integers. It then uses an if-else statement to compare the two integers and display the appropriate message based on their relationship.
To test this code, you can run it in a Rust environment like the Playground or a local development environment with the Rust compiler installed. You'll be prompted to enter values for `a` and `b`, and the program will output whether `a` is less than, equal to, or greater than `b`.

