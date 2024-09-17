Here's the equivalent Rust code for the given Golang code snippet:
```
use std::io;
 
fn main() {
 println!("Enter first number:");
 let mut n1 = String::new();
 io::stdin().read_line(&mut n1).expect("Failed to read line");
 let n1: i32 = match n1.trim().parse() {
 Ok(num) => num,
 Err(_) => panic!("Please enter a valid number"),
 };
 
 println!("Enter second number:");
 let mut n2 = String::new();
 io::stdin().read_line(&mut n2).expect("Failed to read line");
 let n2: i32 = match n2.trim().parse() {
 Ok(num) => num,
 Err(_) => panic!("Please enter a valid number"),
 };
 
 match (n1.cmp(&n2), n1, n2) {
 (std::cmp::Ordering::Less, _, _) => println!("{} is less than {}", n1, n2),
 (std::cmp::Ordering::Equal, _, _) => println!("{} is equal to {}", n1, n2),
 (std::cmp::Ordering::Greater, _, _) => println!("{} is greater than {}", n1, n2),
 }
}
```
This Rust code reads two numbers from the user using `io::stdin().read_line()` and converts them to integers using `trim()` and `parse()`. It then uses a match statement with three cases to compare the two numbers and display the appropriate message. The `cmp` method is used to compare the two numbers and determine their ordering.

