 Here's the equivalent Rust code for the given Java code:

```rust
use std::io;

fn main() {
    let mut input = String::new();
    println!("Enter two integers:");
    io::stdin().read_line(&mut input).expect("Failed to read line");

    let numbers: Vec<i32> = input.trim()
        .split_whitespace()
        .map(|s| s.parse().expect("Please enter valid integers"))
        .collect();

    if numbers.len() != 2 {
        println!("Please enter exactly two integers.");
        return;
    }

    let a = numbers[0];
    let b = numbers[1];

    let sum = a + b;
    let difference = a - b;
    let product = a * b;
    let division = a / b; // truncates towards zero
    let remainder = a % b; // same sign as the first operand

    println!("a + b = {}", sum);
    println!("a - b = {}", difference);
    println!("a * b = {}", product);
    println!("quotient of a / b = {}", division);
    println!("remainder of a / b = {}", remainder);
}
```

This Rust code performs the same operations as the Java code, including reading two integers from standard input, calculating their sum, difference, product, quotient (truncated towards zero), and remainder (same sign as the first operand).
