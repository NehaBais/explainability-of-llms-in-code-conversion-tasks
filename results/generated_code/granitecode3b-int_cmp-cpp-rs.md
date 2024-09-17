Here's the Rust code that achieves the same functionality:
```
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
 Err(_) => {
 println!("Please enter valid integers!");
 return;
 }
 };
 let b: i32 = match b.trim().parse() {
 Ok(num) => num,
 Err(_) => {
 println!("Please enter valid integers!");
 return;
 }
 };

 if a < b {
 println!("{} is less than {}", a, b);
 } else if a == b {
 println!("{} is equal to {}", a, b);
 } else {
 println!("{} is greater than {}", a, b);
 }
}
```
The code uses the `io::stdin().read_line()` function to read two integers from the user. It then parses them into integers using the `match` statement and the `parse()` method. The code then tests the three conditions for each case separately using if-else statements, and prints the appropriate message.

