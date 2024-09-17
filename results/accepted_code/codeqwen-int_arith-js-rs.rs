use std::env;
use std::str::FromStr;

fn main() {
    let args: Vec<String> = env::args().collect();

    if args.len() != 3 {
        println!("Usage: program_name <A> <b>");
        return;
    }

    let a: i32 = match FromStr::from_str(&args[1]) {
        Ok(n) => n,
        Err(_) => {
            println!("Error: A must be an integer.");
            return;
        }
    };
    let b: i32 = match FromStr::from_str(&args[2]) {
        Ok(n) => n,
        Err(_) => {
            println!("Error: B must be an integer.");
            return;
        }
    };

    let sum = A + b;
    let difference = A - b;
    let product = A * b;
    let division = A as f64 / b as f64; // Rust does not have a built-in integer division operator, so we cast to f64 first.
    let remainder = A % b;

    println!("A + b = {}", sum);
    println!("A - b = {}", difference);
    println!("A * b = {}", product);
    println!("A / b = {:.2}", division); // Rust by default rounds floating-point numbers to 7 decimal places. You can change it using `.format()`.
    println!("A % b = {}", remainder);
}
