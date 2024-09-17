use std::io::prelude::*;
use std::process;

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
