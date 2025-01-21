use std::env;
use std::str::FromStr;

fn main() {
    let args: Vec<String> = env::args().collect();

    if args.len() != 3 {
        println!("Usage: program_name <num1> <num2>");
        return;
    }

    let num1: i32 = match FromStr::from_str(&args[1]) {
        Ok(n) => n,
        Err(_) => {
            println!("Error: num1 must be an integer.");
            return;
        }
    };
    let num2: i32 = match FromStr::from_str(&args[2]) {
        Ok(n) => n,
        Err(_) => {
            println!("Error: num2 must be an integer.");
            return;
        }
    };

    let sum = num1 + num2;
    let difference = num1 - num2;
    let product = num1 * num2;
    let division = num1 as f64 / num2 as f64; // Rust does not have a built-in integer division operator, so we cast to f64 first.
    let remainder = num1 % num2;

    println!("num1 + num2 = {}", sum);
    println!("num1 - num2 = {}", difference);
    println!("num1 * num2 = {}", product);
    println!("num1 / num2 = {:.2}", division); // Rust by default rounds floating-point numbers to 7 decimal places. You can change it using `.format()`.
    println!("num1 % num2 = {}", remainder);
}
