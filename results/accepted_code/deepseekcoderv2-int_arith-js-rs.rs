use std::env;
use std::process;

fn main() {
    // Read command-line arguments
    let args: Vec<String> = env::args().collect();
    if args.len() < 3 {
        eprintln!("Usage: {} <a> <b>", args[0]);
        process::exit(1);
    }

    // Parse the integers from command-line arguments
    let a: i32 = match args[1].parse() {
        Ok(num) => num,
        Err(_) => {
            eprintln!("Error parsing argument 'a' as integer.");
            process::exit(1);
        }
    };

    let b: i32 = match args[2].parse() {
        Ok(num) => num,
        Err(_) => {
            eprintln!("Error parsing argument 'b' as integer.");
            process::exit(1);
        }
    };

    // Perform arithmetic operations
    let sum = a + b;
    let difference = a - b;
    let product = a * b;
    let division = a / b;  // This will perform integer division, truncating towards zero
    let remainder = a % b;

    // Print the results
    println!("a + b = {}", sum);
    println!("a - b = {}", difference);
    println!("a * b = {}", product);
    println!("a / b = {}", division);
    println!("a % b = {}", remainder);
}