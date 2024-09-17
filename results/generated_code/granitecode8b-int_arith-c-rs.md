Here's the converted code from C to Rust:
```rust
use std::io;
fn main() {
 let mut line = String::new();
 io::stdin().read_line(&mut line).expect("Failed to read line");
 let args: Vec<&str> = line.trim().split(' ').collect();
 if args.len() < 2 {
 println!("Usage: program_name a b");
 return;
 }
 let a: i32 = args[0].parse().expect("Please enter a valid integer for the first argument");
 let b: i32 = args[1].parse().expect("Please enter a valid integer for the second argument");
 println!("a+b = {}", a + b);
 println!("a-b = {}", a - b);
 println!("a*b = {}", a * b);
 println!("a/b = {}", a / b); // Rounds towards 0
 println!("a%%b = {}", a % b); // Same sign as first operand
}
```
Note: This code assumes that the user will enter valid integers as command-line arguments. If you want to handle invalid input, you can add error handling logic to the code.

