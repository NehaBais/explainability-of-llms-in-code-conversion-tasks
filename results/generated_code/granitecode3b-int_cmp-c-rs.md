Here's the equivalent Rust code for the given C code:
```rust
use std::io;
fn main() {
 println!("Enter two integers:");
 let mut a = String::new();
 let mut b = String::new();
 io::stdin().read_line(&mut a)
 .expect("Failed to read line");
 io::stdin().read_line(&mut b)
 .expect("Failed to read line");

 let a: i32 = match a.trim().parse() {
 Ok(num) => num,
 Err(_) => panic!("Please enter valid integers"),
 };

 let b: i32 = match b.trim().parse() {
 Ok(num) => num,
 Err(_) => panic!("Please enter valid integers"),
 };

 println!("{} is {}", a, if a < b { "less than" } else if a == b { "equal to" } else { "greater than" });
}
```
This code uses the `io` module to read input from the user and the `match` keyword to parse the input as integers. It then compares the two integers using the `if`, `else if`, and `else` keywords to display the appropriate message based on the comparison result.

