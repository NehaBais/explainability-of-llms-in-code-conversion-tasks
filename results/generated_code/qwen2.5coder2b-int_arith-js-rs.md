Sure, here's how you can convert the JavaScript code to Rust:

```rust
use std::io;

fn main() {
    let a: i32 = io::stdin().read_line()
        .expect("Failed to read line")
        .trim_end()
        .parse::<i32>()
        .expect("Invalid input");

    let b: i32 = io::stdin().read_line()
        .expect("Failed to read line")
        .trim_end()
        .parse::<i32>()
        .expect("Invalid input");

    println!("a + b = {}", a + b);
    println!("a - b = {}", a - b);
    println!("a * b = {}", a * b);
    println!("a / b = {:.6}", a as f64 / b as f64);  // Using {} for float numbers in Rust
    println!("a % b = {}", (if a >= 0 { if b > 0 { a - b } else { a + b } } else { if b > 0 { a + b } else { a - b } }).abs());
}
```

This will read two integers from the user, perform arithmetic operations on them, and print out the results. The `io::stdin().read_line()` function is used to get input from the user as a string, which is then parsed into an integer using `.parse::<i32>()`. Error handling has been removed as per your requirements.

The division operation in Rust uses floating-point numbers (`f64`) for its precision. The `abs()` method is used to ensure that the result of the modulo operation always has a positive value.
