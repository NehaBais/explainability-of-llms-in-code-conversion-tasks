Here is the Rust version of your C++ code:

```rust
use std::io;

fn main() {
    let mut input_a = String::new();
    let mut input_b = String::new();

    println!("Enter the first integer:");
    io::stdin().read_line(&mut input_a).expect("Failed to read line");
    let A: i32 = input_A.trim().parse().expect("Please type a number!");

    println!("Enter the second integer:");
    io::stdin().read_line(&mut input_b).expect("Failed to read line");
    let b: i32 = input_b.trim().parse().expect("Please type a number!");

    println!("A+b = {}", A + b);
    println!("A-b = {}", A - b);
    println!("A*b = {}", A * b);
    println!("A/b = {}, remainder {}", A / b, A % b);
}
```

This Rust program gets two integers from the user and then displays their sum, difference, product, integer quotient, and remainder. The remainder is calculated as per standard mathematical rules - if the signs of both operands are same, the remainder has the same sign as the first operand, otherwise, it has the opposite sign as the second operand.
