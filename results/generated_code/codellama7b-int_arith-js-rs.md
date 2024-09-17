To convert the given JavaScript code to Rust, you can use the `std::process` module to get command-line arguments and the `println!` macro to print output. Here's an example of how you could do this:
```
use std::process;
use std::io::prelude::*;

fn main() {
    // Get command-line arguments
    let args = process::args();
    if args.len() != 3 {
        println!("Usage: {} <a> <b>", args[0]);
        return;
    }

    // Parse the arguments as integers
    let a = args[1].parse().unwrap();
    let b = args[2].parse().unwrap();

    // Calculate the results
    let sum = a + b;
    let difference = a - b;
    let product = a * b;
    let division = a / b;
    let remainder = a % b;

    // Print the results
    println!("{} + {} = {}", a, b, sum);
    println!("{} - {} = {}", a, b, difference);
    println!("{} * {} = {}", a, b, product);
    println!("{} / {} = {}", a, b, division);
    println!("{} % {} = {}", a, b, remainder);
}
```
This code uses the `std::process` module to get the command-line arguments and the `std::io::prelude` module to print output. It then parses the arguments as integers using the `parse()` method of the `String` type, and calculates the results of the operations. Finally, it prints the results using the `println!` macro.

Note that this code assumes that the command-line arguments are in the format `<a> <b>` where `a` and `b` are integers. If you want to support additional formats or handle errors more robustly, you can modify the code accordingly.
