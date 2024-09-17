Here's the converted code from Golang to Rust:
```
fn main() {
 let mut a = 0;
 let mut b = 0;
 println!("Enter two integers:");
 std::io::stdin().read_line(&mut a.to_string());
 std::io::stdin().read_line(&mut b.to_string());
 a = a.trim().parse().unwrap();
 b = b.trim().parse().unwrap();
 let sum = a + b;
 let difference = a - b;
 let product = a * b;
 let quotient = a / b; // rounds towards 0
 let remainder = a % b; // same sign as first operand
 println!("{} + {} = {}", a, b, sum);
 println!("{} - {} = {}", a, b, difference);
 println!("{} * {} = {}", a, b, product);
 println!("{} / {} = {}", a, b, quotient);
 println!("{} %% {} = {}", a, b, remainder);
}
``` 
Note that in Rust, the `fmt` package is used for formatted printing, while in Golang, the `fmt` package is used for scanning input. The code also uses different variable names (`a` and `b`) to represent the two integers entered by the user. Additionally, the division operator (`/`) returns an integer quotient instead of a floating-point value like in Golang.

