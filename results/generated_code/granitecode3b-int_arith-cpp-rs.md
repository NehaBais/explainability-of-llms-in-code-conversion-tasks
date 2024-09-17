Here's the code in Rust that meets the requirements you've specified:
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
 Err(_) => panic!("Please enter a valid integer"),
 };
 
 let b: i32 = match b.trim().parse() {
 Ok(num) => num,
 Err(_) => panic!("Please enter a valid integer"),
 };
 
 println!("a+b = {}", a + &b);
 println!("a-b = {}", a - &b);
 println!("a*b = {}", a * &b);
 let q: i32 = a / b;
 let r: i32 = a % b;
 println!("a/b = {}, remainder {} = {}", q, a, r);
}
```
In this code, we use the `io` module to read two integers from the user. We then parse them using the `parse()` method and convert them to `i32` types. Finally, we perform the required arithmetic operations on these integers and print the results.
Note that in Rust, there is no modulo operator (`%`), so we use the `%` symbol to represent remainder. Also, integer division in Rust uses integer division (floor), not floating-point division as in C++. Therefore, the quotient may be different from the expected result in some cases.

