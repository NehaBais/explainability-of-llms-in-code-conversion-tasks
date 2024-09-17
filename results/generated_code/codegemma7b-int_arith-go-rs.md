```rust
use std::io;

fn main() {
    let mut a = 0;
    let mut b = 0;

    io::stdin()
        .read_line(&mut String::new())
        .expect("Failed to read line");
    let numbers: Vec<i32> = io::stdin()
        .read_line(&mut String::new())
        .expect("Failed to read line")
        .split_whitespace()
        .map(|s| s.parse::<i32>().expect("Failed to parse integer"))
        .collect();
    a = numbers[0];
    b = numbers[1];

    println!("{} + {} = {}", a, b, a + b);
    println!("{} - {} = {}", a, b, a - b);
    println!("{} * {} = {}", a, b, a * b);
    println!("{} / {} = {}", a, b, a / b); // truncates towards 0
    println!("{} %% {} = {}", a, b, a % b); // same sign as first operand
    // no exponentiation operator
}
```
