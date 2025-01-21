use std::io::{self, Write};

fn main() {
    print!("Enter the first number: ");
    let _ = io::stdout().flush();
    let mut a = String::new();
    match io::stdin().read_line(&mut a) {
        Ok(_n) => {}
        Err(_error) => {
            println!("Error reading from standard input");
            return;
        } 
    };
    let a: i32 = a.trim().parse().unwrap_or(-1); // Parsing string to integer or default -1 if error

    print!("Enter the second number: ");
    let _ = io::stdout().flush();
    let mut b = String::new();
    match io::stdin().read_line(&mut b) {
        Ok(_n) => {}
        Err(_error) => {
            println!("Error reading from standard input");
            return;
        } 
    };
    let b: i32 = b.trim().parse().unwrap_or(-1); // Parsing string to integer or default -1 if error

    let sum = a + b; // The result of adding 'a' and 'b'
    let difference = a - b; // The result of subtracting 'b' from 'a'
    let product = a * b; // The result of multiplying 'a' and 'b'
    // Performing integer division. In Rust, the quotient is always rounded towards zero.
    let quotient = a / b; 
    let remainder = a % b; // The remainder when 'a' is divided by 'b'. Its sign is same as dividend.

    println!("Sum: {}", sum);
    println!("Difference: {}", difference);
    println!("Product: {}", product);
    println!("Quotient: {}", quotient); 
    println!("Remainder: {}", remainder);
}