Here's the Rust code that fulfills the requirements you specified:
```
use std::io;
fn main() {
 println!("Enter two integers:");
 let mut a = String::new();
 let mut b = String::new();
 io::stdin().read_line(&mut a).unwrap();
 io::stdin().read_line(&mut b).unwrap();
 let a: i32 = match a.trim().parse() {
 Ok(num) => num,
 Err(_) => panic!("Please enter a valid integer!"),
 };
 let b: i32 = match b.trim().parse() {
 Ok(num) => num,
 Err(_) => panic!("Please enter a valid integer!"),
 };
 println!("a + b = {}", a + b);
 println!("a - b = {}", a - b);
 println!("a * b = {}", a * b);
 let quotient = a / b; // Truncates towards zero (in C99)
 let remainder = a % b; // Remainder sign matches the sign of the first operand (in C99)
 println!("a / b = {} ({})", quotient, if quotient > 0 { "positive" } else if quotient < 0 { "negative" } else { "zero" });
 println!("a %% b = {} ({})", remainder, if remainder > 0 { "positive" } else if remainder < 0 { "negative" } else { "zero" });
 let exponentiation = a.pow(b as u32);
 println!("a ^ b = {}", exponentiation);
}
```
This code first reads two integers from the user using `io::stdin().read_line()`. It then parses them into integers using `match` and handles any errors using `panic!()`.
The code then performs the four arithmetic operations you specified and displays the results. For integer division, it uses the `/` operator and truncates towards zero (in C99). For modulo division, it uses the `%` operator and returns a remainder with the sign of the first operand (in C99).
Finally, the code calculates the exponentiation using the `pow()` method and displays the result. Note that Rust does not have an explicit remainder operation like in some other languages, so we use the modulo operator (`%`) to get the remainder of integer division.

