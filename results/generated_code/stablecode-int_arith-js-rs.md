Here is the equivalent Rust code:

```rust
use std::io;

fn main() {
    let mut input = String::new();
    println!("Enter two integers separated by a space:");

    // Get user input for the first integer
    io::stdin().read_line(&mut input)).expect("Failed to read line");

    // Convert the first integer from string to i32 (integer type)
    let a: i32 = match input.trim().parse::<i32>() {
        Ok(num) => num,
        Err(_) => panic!("Invalid integer format"),
    };

    input.clear();

    // Get user input for the second integer
    io::stdin()
        .read_line(&mut input))
        .expect("Failed to read line");

    // Convert the second integer from string to i32 (integer type)
    let b: i32 = match input.trim().parse::<i32>() {
        Ok(num) => num,
        Err(_) => panic!("Invalid integer format"),
    };

    println!(
        "a + b = {}", 
         a + b
    );

    println!(
        "a - b = {}", 
         a - b
    ));

    println!(
        "a * b = {}", 
         a * b
    );

    // The integer division operation in Rust returns the largest floor (integer) value that is less than or equal to the division of the two operands.
    // In other words, the quotient returned by the '/' operator is an integer (floor) value that represents how many times the second operand can be subtracted from the first operand without going into negative numbers).
    println!(
        "a / b = {}", 
         a / b
    );

    // The remainder operation ('%') in Rust returns the number that remains after dividing one number by another (with flooring)).
    println!(
        "a % b = {}", 
         a % b,
    );
}
```
This script first parses two integers from command line arguments (`process.argv` array in Node.js). Then it computes and prints the sum, difference, product, quotient (with rounding towards zero), and remainder of these two numbers.
