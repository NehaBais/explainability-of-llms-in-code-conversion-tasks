To convert the given Java code to Rust, you can use the `scan` function from the `std::io` module to get input from the user. Then, you can use the arithmetic operators to perform the calculations and print the results.
Here's an example of how this could be done:
```
use std::io;

fn main() {
    // Get the 2 numbers from command line arguments
    let mut sc = io::scan();
    let a = sc.next_int();
    let b = sc.next_int();

    // Perform calculations and print results
    println!("a + b = {}", a + b);
    println!("a - b = {}", a - b);
    println!("a * b = {}", a * b);
    println!("quotient of a / b = {}", a as f64 / b as f64); // truncates towards 0
    println!("remainder of a / b = {}", a % b);   // same sign as first operand
}
```
Note that in Rust, the `next_int` function returns a `Result<i32>`, which means it can return an error if the input is not a valid integer. To handle this case, you can use the `unwrap` method to unwrap the result and get the actual value. Here's an example of how this could be done:
```
use std::io;

fn main() {
    // Get the 2 numbers from command line arguments
    let mut sc = io::scan();
    let a = sc.next_int().unwrap();
    let b = sc.next_int().unwrap();

    // Perform calculations and print results
    println!("a + b = {}", a + b);
    println!("a - b = {}", a - b);
    println!("a * b = {}", a * b);
    println!("quotient of a / b = {}", a as f64 / b as f64); // truncates towards 0
    println!("remainder of a / b = {}", a % b);   // same sign as first operand
}
```
Also, in Rust, the `println` function is used to print the results, so you don't need to use `System.out.println`.
