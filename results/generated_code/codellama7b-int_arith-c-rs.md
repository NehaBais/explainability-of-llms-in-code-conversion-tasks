
Here's the Rust equivalent of the given code:

```
use std::io;
use std::str;

fn main() -> io::Result<()> {
    let mut args = vec![];
    for i in 0..10 {
        let mut input = String::new();
        println!("Please enter number {}", i);
        io::stdin().read_line(&mut input)?;
        let number: i32 = str::parse(input.trim()).unwrap();
        args.push(number);
    }
    if args.len() < 3 {
        return Err(io::ErrorKind::Other.into());
    }
    let a = args[0];
    let b = args[1];
    let sum = a + b;
    let difference = a - b;
    let product = a * b;
    let quotient = a / b; // truncates towards 0 (in Rust)
    let remainder = a % b; // same sign as first operand (in Rust)
    println!("a+b = {}", sum);
    println!("a-b = {}", difference);
    println!("a*b = {}", product);
    println!("a/b = {}", quotient);
    println!("a%%b = {}", remainder);
    Ok(())
}
```
Note that in Rust, the `std::str` module provides a function called `parse()` which can be used to convert strings to numbers. In this code, we use this function to parse the user's input as an integer and store it in the `args` vector. We also check if the user has entered at least 3 numbers, or else return an error.

The code then calculates the sum, difference, product, quotient (which is rounded towards zero), and remainder of `a` and `b`, and prints them to the console using println!() statements.
