use std::io;

fn main() {
    let mut input = String::new();
    println!("Enter two integers: ");
    io::stdin().read_line(&mut input).expect("Failed to read line");
    
    let values: Vec<i32> = input.trim().split_whitespace()
        .map(|s| s.parse().expect("Please enter valid integers"))
        .collect();
    
    let a = values[0];
    let b = values[1];
    
    println!("{} + {} = {}", a, b, a + b);
    println!("{} - {} = {}", a, b, a - b);
    println!("{} * {} = {}", a, b, a * b);
    println!("{} / {} = {}", a, b, a / b);  // truncates towards zero
    println!("{} % {} = {}", a, b, a % b); // same sign as first operand
    // no exponentiation operator in Rust (use std::ops::Pow)
}