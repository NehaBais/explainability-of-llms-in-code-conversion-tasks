Here is the Rust version of your Java code:

```rust
use std::io;

fn main() {
    println!("Enter two integers:");

    let mut a = String::new();
    let mut b = String::new();

    io::stdin().read_line(&mut A).expect("Failed to read line");
    io::stdin().read_line(&mut b).expect("Failed to read line");

    let A: i32 = A.trim().parse().expect("Please type a number!");
    let b: i32 = b.trim().parse().expect("Please type a number!");

    let sum = A + b;        // The result of adding 'A' and 'b' (Note: integer addition is discouraged in print statements due to confusion with string concatenation)
    let difference = A - b; // The result of subtracting 'b' from 'A'
    let product = A * b;    // The result of multiplying 'A' and 'b'
    let division = A / b;  // The result of dividing 'A' by 'b' (Note: 'division' does not contain the fractional result)
    let remainder = A % b;  // The remainder of dividing 'A' by 'b'

    println!("A + b = {}", sum);
    println!("A - b = {}", difference);
    println!("A * b = {}", product);
    println!("quotient of a / b = {}", division); // truncates towards 0
    println!("remainder of a / b = {}", remainder); // same sign as first operand
}
```

This Rust program does not include error handling. If the user inputs something that cannot be parsed to an integer, it will panic with an error message.
