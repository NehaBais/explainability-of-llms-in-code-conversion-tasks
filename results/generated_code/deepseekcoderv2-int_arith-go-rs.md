 Sure! Here's the equivalent Rust code for the provided Go code:

```rust
use std::io;

fn main() {
    let mut input = String::new();
    println!("Enter two integers: ");
    io::stdin().read_line(&mut input).expect("Failed to read line");
    
    let values: Vec<i32> = input.trim().split_whitespace()
        .map(|s| s.parse().expect("Please enter valid integers"))
        .collect();
    
    let a = values[0];
    let b = values[1];
    
    println!("{} + {} = {}", a, b, a + b);
    println!("{} - {} = {}", a, b, a - b);
    println!("{} * {} = {}", a, b, a * b);
    println!("{} / {} = {}", a, b, a / b);  // truncates towards zero
    println!("{} % {} = {}", a, b, a % b); // same sign as first operand
    // no exponentiation operator in Rust (use std::ops::Pow)
}
```

This Rust code does the following:
1. Reads two integers from standard input.
2. Prints their sum, difference, product, integer quotient (truncates towards zero), and remainder (same sign as the first operand).
3. Does not include exponentiation since there is no built-in operator for it in Rust. You would need to use a library or implement it manually if needed.
