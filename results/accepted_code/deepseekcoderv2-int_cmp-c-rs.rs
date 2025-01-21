use std::io;

fn main() {
    let mut input = String::new();
    
    println!("Enter two integers separated by a space:");
    io::stdin().read_line(&mut input).expect("Failed to read line");
    
    let numbers: Vec<i32> = input.split_whitespace()
        .map(|s| s.parse().expect("Please enter valid integers"))
        .collect();
    
    let a = numbers[0];
    let b = numbers[1];
    
    if a < b {
        println!("{} is less than {}", a, b);
    } else if a == b {
        println!("{} is equal to {}", a, b);
    } else {
        println!("{} is greater than {}", a, b);
    }
}