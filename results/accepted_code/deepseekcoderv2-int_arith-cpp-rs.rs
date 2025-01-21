use std::io;

fn main() {
    let mut input = String::new();
    println!("Enter two integers:");
    io::stdin().read_line(&mut input).expect("Failed to read line");
    
    let values: Vec<i32> = input.trim()
        .split_whitespace()
        .map(|s| s.parse().unwrap())
        .collect();
    
    let a = values[0];
    let b = values[1];
    
    println!("a + b = {}", a + b);
    println!("a - b = {}", a - b);
    println!("a * b = {}", a * b);
    
    // For quotient and remainder, we need to handle the division differently in Rust.
    // The "/" operator performs integer division towards zero.
    let quotient = a / b;
    let remainder = a % b;
    println!("a / b = {}, remainder {}", quotient, remainder);
    
    // Check if exponentiation is supported by the standard library (it's not)
    // If you need to support it, consider using a crate like `num-traits` or `nalgebra`.
}