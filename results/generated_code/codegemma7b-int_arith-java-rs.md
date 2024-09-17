```rust
use std::io;

fn main() {
    // Get the two numbers from the user
    let mut a = String::new();
    let mut b = String::new();

    io::stdin()
        .read_line(&mut a)
        .expect("Failed to read line");
    io::stdin()
        .read_line(&mut b)
        .expect("Failed to read line");

    let a: i32 = a.trim().parse().expect("Invalid input");
    let b: i32 = b.trim().parse().expect("Invalid input");

    // Calculate the operations
    let sum = a + b;
    let difference = a - b;
    let product = a * b;
    let division = a / b; // Truncates towards zero
    let remainder = a % b; // Same sign as the first operand

    // Print the results
    println!("a + b = {}", sum);
    println!("a - b = {}", difference);
    println!("a * b = {}", product);
    println!("quotient of a / b = {}", division);
    println!("remainder of a / b = {}", remainder);
}
```
