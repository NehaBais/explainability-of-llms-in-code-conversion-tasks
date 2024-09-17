Here's the converted code in Rust:
```
use std::io;
fn main() {
 println!("Enter two integers to add:");
 let mut a = String::new();
 io::stdin().read_line(&mut a)
 .expect("Failed to read line");
 let a: i32 = match a.trim().parse() {
 Ok(num) => num,
 Err(_) => {
 println!("Invalid input! Please enter two integers.");
 return;
 }
 };
 println!("Enter another integer to subtract:");
 let mut b = String::new();
 io::stdin().read_line(&mut b)
 .expect("Failed to read line");
 let b: i32 = match b.trim().parse() {
 Ok(num) => num,
 Err(_) => {
 println!("Invalid input! Please enter two integers.");
 return;
 }
 };
 let sum = a + b;
 let difference = a - b;
 let product = a * b;
 let division = a / b;
 let remainder = a % b; // This produces the remainder after dividing 'b' into 'a'. The '%' operator is called the 'modulo' operator
 println!("Sum: {}", sum);
 println!("Difference: {}", difference);
 println!("Product: {}", product);
 println!("Division: {:.2}", division); // The '{:.2}' syntax is a placeholder that formats the floating-point number with two decimal places
 println!("Remainder: {}", remainder);
}
```
Note that Rust does not have an exponentiation operator like JavaScript. However, we can use the `pow` method to calculate the power of two numbers. For example, `2i32.pow(3)` will return 8.

