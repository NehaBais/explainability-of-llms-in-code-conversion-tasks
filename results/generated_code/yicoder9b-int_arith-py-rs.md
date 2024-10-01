In Rust, you would handle user input differently. Here is how the converted code might look like, assuming that your program is running in an environment where user inputs are supported (like a terminal or a REPL).

```rust
use std::io::{self, Write};

fn main() {
    let mut input1 = String::new();
    println!("Enter the first number:");
    match io::stdin().read_line(&mut input1) {
        Ok(_n) => {},
        Err(error) => println!("{}", error),
    }
    let mut input2 = String::new();
    println!("Enter the second number:");
    match io::stdin().read_line(&mut input2) {
        Ok(_n) => {},
        Err(error) => println!("{}", error),
    } 

    let a: i32 = input1.trim().parse().unwrap();
    let b: i32 = input2.trim().parse().unwrap();

    println!("Sum: {}", a + b);
    println!("Difference: {}", a - b);
    println!("Product: {}", a * b);
  
    // In Rust, division rounds towards zero by default 
    let quotient = a / b;
    let remainder = a % b;
    if a < 0 ^ b < 0 { // if the operands are of different signs...
        remainder *= -1;  // make sure the remainder has the same sign as 'a'
    }
  
    println!("Integer quotient: {}", quotient);
    println!("Remainder: {}", remainder);
    let power = a.pow(b as u32);
    println!("Exponentiation: {}", power); 
}
```
Please note that the Rust `/` operator rounds towards zero. Therefore if you want to round division toward negative infinity (like Python's `//` does), a bit more complex handling will be needed. Also, in Rust, the modulo operation always has the same sign as the dividend; if you need it to have the same sign as divisor instead, additional logic is required.
