Here's the converted code from Java to Rust:
```rust
use std::io;
fn main() {
 let mut stdin = io::stdin();
 
 println!("Enter first integer:");
 let nbr1: i32 = match stdin.readline() {
 Ok(val) => val.trim().parse().unwrap(),
 Err(_) => panic!("Failed to read line"),
 };
 
 println!("Enter second integer:");
 let nbr2: i32 = match stdin.readline() {
 Ok(val) => val.trim().parse().unwrap(),
 Err(_) => panic!("Failed to read line"),
 };
 
 if nbr1 < nbr2 {
 println!("{} is less than {}", nbr1, nbr2);
 } else if nbr1 > nbr2 {
 println!("{} is greater than {}", nbr1, nbr2);
 } else {
 println!("{} is equal to {}", nbr1, nbr2);
 }
}
```
This code prompts the user to enter two integers and compares them using the `<`, `>`, and `==` operators. The result of the comparison is then printed to the console.
To test this code, you can run it in a Rust environment such as the Rust Playground or by compiling and running it with `rustc`. When prompted, enter three different sets of integers and check that the output reflects the correct comparison result for each set.

