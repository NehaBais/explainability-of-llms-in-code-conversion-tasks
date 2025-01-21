use std::io;

fn main() {
    let mut input = String::new();
    println!("Enter two integers:");
    
    // Read from standard input
    io::stdin().read_line(&mut input).expect("Failed to read line");
    
    // Trim the input and split it into parts (assuming valid input)
    let numbers: Vec<i32> = input.trim()
        .split_whitespace()
        .map(|s| s.parse().expect("Please enter valid integers"))
        .collect();
    
    // Ensure we have exactly two numbers
    if numbers.len() != 2 {
        eprintln!("Please enter exactly two integers.");
        return;
    }
    
    let a = numbers[0];
    let b = numbers[1];
    
    // test for less-than
    if a < b {
        println!("{} is less than {}", a, b);
    }
    
    // test for equality
    if a == b {
        println!("{} is equal to {}", a, b);
    }
    
    // test for greater-than
    if a > b {
        println!("{} is greater than {}", a, b);
    }
}