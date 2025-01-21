use std::env;
use std::process;

fn main() {
    let args: Vec<String> = env::args().collect();
    if args.len() < 3 {
        eprintln!("Usage: {} <int1> <int2>", args[0]);
        process::exit(1);
    }

    let a: i32 = args[1].parse().expect("Invalid integer");
    let b: i32 = args[2].parse().expect("Invalid integer");

    if b == 0 {
        eprintln!("Error: Division by zero is not allowed.");
        process::exit(2);
    }

    println!("a + b = {}", a + b);
    println!("a - b = {}", a - b);
    println!("a * b = {}", a * b);
    println!("a / b = {}", a / b); // truncates towards zero
    println!("a % b = {}", a % b); // same sign as the first operand

    // Rust does not support exponentiation directly in basic operations, but you can use libraries for this.
}